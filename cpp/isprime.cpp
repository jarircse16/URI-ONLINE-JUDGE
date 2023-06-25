#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i,isprime=1;
    cin>>x;
    if(x==2)
        isprime=1;
    else if(x%2==0)
        isprime=0;
    else
    {
        for(i=3;i<=(int)sqrt(x);i+=2)
        {
            if(x%i==0)
            {
                isprime=0;
                break;
            }
        }
    }
    if(isprime==0)
        cout<<"No\n";
    else
        cout<<"Yes";
    return 0;
}
