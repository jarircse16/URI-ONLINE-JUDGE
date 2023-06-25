#include<stdio.h>
#include <stdlib.h>

int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int n;
        printf("Enter number count:\n");
        scanf("%d",&n);
        int a[n];
        printf("Enter numbers:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int es=0;
        for(i=0;i<n;i++)
        {
            es=es+abs(a[i]-a[i+1]);
        }
        printf("%d",es);
        printf("\n");
    }

}
