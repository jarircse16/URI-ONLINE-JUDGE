#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout << #x << "=" << x << "\n"

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,k,sum=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        int z=0;
        while(k-- && a[z]<0)
        {
            dbg(a[z]);
            sum-=a[z];
            z++;
        }
        printf("Case %d: %d\n",t,sum);
    }
}
