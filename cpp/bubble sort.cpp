#include<stdio.h>
#include<string.h>
int main()
{

    int arr[]={2,3,5,4,1};
    int n=5;

    int i,j;

    for(j=0;j<n-1;j++){
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                arr[i]^=arr[i+1]^=arr[i]^=arr[i+1];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
