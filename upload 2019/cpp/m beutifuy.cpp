#include<bits/stdc++.h>
using namespace std;

int sod(int x)
{
    int sum=0, count=ceil(log10(x));
    while(count--)
    {
        sum+=x%10;
        x=x/10;
    }
    return sum;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int i,L,R,m,c=0;
        cin>>L>>R>>m;
        while(L%m!=0)
        {
            L++;
        }

        while(R%m!=0)
        {
            R--;
        }

        for(i=L;i<=R;i+=m)
        {
                if(sod(i)%m==0)
                {
                    c++;
                }
        }

        cout<<c<<endl;
    }
    return 0;
}
