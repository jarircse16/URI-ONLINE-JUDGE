#include <iostream>
#include <Aclapi.h>
#include <iostream>
#include <windows.h>
#include <sddl.h>
#include <stdio.h>

using namespace std;

BOOL DenyAccess()
{
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, GetCurrentProcessId());
    SECURITY_ATTRIBUTES sa;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.bInheritHandle = FALSE;
    SetKernelObjectSecurity(hProcess, DACL_SECURITY_INFORMATION, (PSECURITY_DESCRIPTOR)sa.lpSecurityDescriptor);
    return TRUE;
}

int main()
{
    while(DenyAccess());
    return 0;
}
