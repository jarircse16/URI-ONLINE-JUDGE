#include<bits/stdc++.h>
using namespace std;

int a[1000005];
int cs[1000005];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    cs[0]=0;
    cs[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        cs[i]=cs[i-1]+a[i];
    }//O(N)

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        long long s=0;
        /*for(;l<=r;l++)
            s+=a[l];
        *///O(qn)
/// Q=1000 N=10^6 NQ=10^9 10s TLE
        s=cs[r]-cs[l-1];//O(1)
/// O(N+Q) O(N)
        cout<<s<<endl;
    }
}
