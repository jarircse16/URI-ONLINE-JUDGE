#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[51];

ll fib(int n)
{
    if(dp[n]!=-1)
        return dp[n];
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    ll n;
    cin>>n;
    cout<<fib(n);
}
