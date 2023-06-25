#include<bits/stdc++.h>
using namespace std;

void pyramid(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i-1;j++)
        {
            printf("* ");
        }
        printf("*\n");
    }
}

int main()
{
    int n;
    cin>>n;
    pyramid(n);
}
