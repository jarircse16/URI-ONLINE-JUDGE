#include<bits/stdc++.h>
using namespace std;
#define m 10000
typedef long long ll;
ll fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return ((n%m)*fact(n-1)%m)%m;
}
ll fact(int n,bool iter)
{
    int r=1;
    for(int i=1;i<=n;i++)
    {
        r*=i;
        r%=m;
    }
    r%=m;
    return r;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n,true);
    return 0;
}
