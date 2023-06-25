#include<stdio.h>
void SWAP(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int arr[]={2,3,5,4,1};
    int n=5;

    int i,j;
    int MIN=0;
    for(j=0;j<n-1;j++)
    {
        MIN=j;
        for(i=j;i<n;i++)
            if(arr[i]<arr[MIN])
            MIN=i;
        SWAP(&arr[j],&arr[MIN]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
