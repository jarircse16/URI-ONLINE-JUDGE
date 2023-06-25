#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll dp[21];
ll fact(int n)
{
    if(dp[n]!=-1)
        return dp[n];
    if(n==0 || n==1)
        return 1;
    dp[n]=n*fact(n-1);
    return dp[n];
    //return n*fact(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("in.txt","r",stdin);
    memset(dp,-1,sizeof(dp));
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fact(n)<<"\n";
    }
}
