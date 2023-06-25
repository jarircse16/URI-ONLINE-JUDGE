#include<bits/stdc++.h>
using namespace std;
int dp[100];

int fib(int n)
{
    cout << "!" << endl;
    if(n==0 || n==1)
        return 1;
    else if(dp[n]!=0)
        return dp[n];
    else
        return dp[n]=fib(n-1)+fib(n-2);
}

int main()
{
    memset(dp,0,100);

    cout << fib(10);
}
