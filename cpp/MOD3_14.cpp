#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;cin>>n;
    if (n%2==0)
    {
        if (n==2)
            cout<<"   "<<n<<"  is a prime"<<endl;
        else
        cout<<"   "<<n<<"  is a non-prime"<<endl;
        return 0;
    }
    else
        for(i=3;i<=sqrt(n);i+=2)
        {
            if(n%3==0)
            {
                cout<<"   "<<n<<"  is a non-prime"<<endl;
                return 0;
            }
        }
        if(i>sqrt(n))
        {
            cout<<"   "<<n<<"  is a prime"<<endl;
            return 0;
        }

        return 0;
}
