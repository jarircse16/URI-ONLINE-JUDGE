#include<bits/stdc++.h>
using namespace std;

bool ascending_compare(int x,int y)
{
    return x<y;
}

bool descending_compare(int x,int y)
{
    return x>y;
}

int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3,ascending_compare);
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
            i++;
    }
    return 0;
}
