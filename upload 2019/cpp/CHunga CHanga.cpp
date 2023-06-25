#include<bits/stdc++.h>
using namespace std;

int x,y,z,maxc,a,b,m,n,tx,ty;


int minc()
{
    if(x>y)
    {
    a=floor(x/z);
    b=floor(y/z);
    m=a;
    n=b;
    tx=x;
    ty=y;

    while(1)
    {
   loop:x++;
        y--;
        a=floor(x/z);
        b=floor(y/z);
        if(a+b>m+n)
            return (x-tx);
        else
        {
            m=a;
            n=b;
            goto loop;
        }
    }

}
    else
    {
        a=floor(x/z);
        b=floor(y/z);
        m=a;
        n=b;
        tx=x;
        ty=y;
        while(1)
        {
        loop2:x--;
             y++;
             a=floor(x/z);
             b=floor(y/z);
            if(a+b>m+n)
                return (tx-x);
            else
            {
                m=a;
                n=b;
                goto loop2;
            }
        }

    }

}

int main()
{

    cin>>x>>y>>z;
    maxc=(int)(x+y)/z;
    int p=minc();
    cout<<maxc<<" "<<p<<"\n";
    return 0;
}
