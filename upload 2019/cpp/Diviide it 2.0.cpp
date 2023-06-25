#include<bits/stdc++.h>
using namespace std;

int n,q=0;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        while(n%2==0)
        {
            n/=2;
            q++;
        }
        while(n%3==0)
        {
            n=(2*n)/3;
            q++;
        }
        while(n%5==0)
        {
            n=(4*n)/5;
            q++;
        }
    }
        cout<<q<<"\n";
}



