#include<iostream>
#include<cmath>

using namespace std;

int f(int x)
{
    return x*x-x+41;
}

int main ()
{
    int n,i,p;cin>>n;
    p=f(n);
    cout<<"   f("<<n<<") = "<<p<<endl;
    if (p%2==0)
    {
        if (p==2)
            cout<<"   "<<p<<"  is a prime"<<endl;
        else
        cout<<"   "<<p<<"  is a non-prime"<<endl;
        return 0;
    }
    else
        for(i=3;i<=sqrt(p);i+=2)
        {
            if(p%3==0)
            {
                cout<<"   "<<p<<"  is a non-prime"<<endl;
                return 0;
            }
        }
        if(i>sqrt(p))
        {
            cout<<"   "<<p<<"  is a prime"<<endl;
            return 0;
        }

        return 0;
}
