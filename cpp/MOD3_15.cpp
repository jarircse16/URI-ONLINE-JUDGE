#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
    int n,i,p,f=0;cin>>n;
    p=n;
    a:
    if (p%2==0)
    {
        if (p==2)
            cout<<"   "<<n<<"  is a mersenne prime"<<endl;
        else
        cout<<"   "<<n<<"  is a non- mersenne prime"<<endl;
        return 0;
    }
    else
        for(i=3;i<=sqrt(p);i+=2)
        {
            if(p%3==0)
            {
                cout<<"   "<<n<<"  is a non-mersenne prime"<<endl;
                return 0;
            }
        }
        if(i>sqrt(p) && f==1)
        {
            cout<<"   "<<n<<"  is a mersenne prime"<<endl;
            return 0;
        }
        p=pow(2,n)-1;
        f=1;
        goto a;

        return 0;
}

