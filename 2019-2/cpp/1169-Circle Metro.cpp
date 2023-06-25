#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    if(abs(a-b)<=abs(a-x)+abs(b-y))
        cout<<"YES";
    else
        cout<<"NO";
}
