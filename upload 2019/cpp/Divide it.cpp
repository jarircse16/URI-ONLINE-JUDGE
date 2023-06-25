#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q=0;
        cin>>n;
        while(n>1)
        {
            if(n%2==0)
            {
                n=n/2;
                q++;
            }
            if(n%3==0)
            {
                n=(2*n)/3;
                q++;
            }
            if(n%5==0)
            {
                n=(4*n)/5;
                q++;
            }
            if(n==1)
                break;
        }
        cout<<q<<"\n";
    }
}
