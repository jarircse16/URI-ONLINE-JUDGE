#include<bits/stdc++.h>
using namespace std;

int dec_to_any_base(int b,int x)
{
    int r,m=1,s=0;
    while(x>0)
    {
    r=x%b;
    s+=(r*m);
    m*=10;
    x/=b;

    }
        return s;
}


int fact_digit_anybase(int n,int b)
{
    int i;
    double r=0;
    for(i=n;i>1;i--)
    {
        r+=(log(i)/log(b));
    }
    return (int)(r)+1;

}


int main()
{
    int t,n,b,i=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        printf("Case %d: %d",i,fact_digit_anybase(n,b));
    }
    return 0;
}
