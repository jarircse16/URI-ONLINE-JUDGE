#include<bits/stdc++.h>
using namespace std;
#define pi 3.1416
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double r;
        cin>>r;
        printf("Case %d: %.2f\n",i,8*r*r-2*pi*r*r);
    }
}
