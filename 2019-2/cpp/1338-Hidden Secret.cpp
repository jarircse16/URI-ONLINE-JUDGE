#include<bits/stdc++.h>
using namespace std;

int main()
{
    /**char a='A';
    cout<<(char)(a&95); toupper
    cout<<(char)(a|32); tolower*/
    int T,c=1;
    cin>>T;

    while(T--)
    {
        char s1[100],s2[100];
        scanf(" %[^\n]",s1); //string including space
        scanf(" %[^\n]",s2);
        int i,len1=strlen(s1),len2=strlen(s2);
        int cha1[26],cha2[26],f=1;
        map<char,int> cha11,cha22;
        memset(cha1,0,sizeof(cha1));
        memset(cha2,0,sizeof(cha2));
        for(i=0;i<len1;i++)
        {
            if(s1[i]==' ') continue;
            s1[i]=s1[i]|32;
            //cha1[s1[i]-'a']++;
            cha11[s1[i]]++;
        }
        for(i=0;i<len2;i++)
        {
            if(s2[i]==' ') continue;
            s2[i]=s2[i]|32;
            //cha2[s2[i]-'a']++;
            cha22[s2[i]]++;
        }
        for(char c='a';c<='z';c++)
        {
            //if(cha1[i]!=cha2[i])
            if(cha11[c]!=cha22[c])
            {
                f=0;
                break;
            }
        }
        if(f==1)
            printf("Case %d: Yes",c);
        else
            printf("Case %d: No",c);
    }
    return 0;
}
