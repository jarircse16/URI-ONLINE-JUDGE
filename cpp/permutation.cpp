#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="1234567890";
    char init[]="1234567890";
    int i,j;
    int len=strlen(arr);
    while(1)
    {
        for(i=0;i<len-1;i++)
        {
            /*char t=arr[i];
            arr[i]=arr[i+1];
            arr[i]=t;
            */
            arr[i]^=arr[i+1];
            arr[i+1]^=arr[i];
            arr[i]^=arr[i+1];
            printf("%s\n",arr);
            if(strcmp(arr,init)==0)
                return 0;
        }
    }

}
