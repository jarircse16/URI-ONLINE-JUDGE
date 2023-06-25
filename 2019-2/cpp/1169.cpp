#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f=0;
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    int loop[105];
    int t=1;
    if(a<x) for(int i=a;i<=x;i++) loop[i]=t++;
    else
    {
        for(int i=a;i<=n;i++)
        loop[i]=t++;
        for(int i=1;i<=x;i++)
        loop[i]=t++;
    }
    t=1;
    if(b>y) for(int i=b;i>=y;i--) if(loop[i]==t) { f=1; break; } else t++;
    else
    {
        for(int i=b;i>=1;i--)
            if(loop[i]==t) { f=1; break; } else t++;
        if(f!=1)
        for(int i=n;i>=y;i--)
            if(loop[i]==t) { f=1; break; } else t++;
    }
    if(f==1)
        cout<<"YES";
    else
        cout<<"NO";
}
