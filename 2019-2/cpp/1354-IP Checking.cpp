#include<bits/stdc++.h>
using namespace std;
int tobin(int x)
{
    int r,m=1,s=0;
    while(x>0)
    {
    r=x%2;
    s+=(r*m);
    m*=10;
    x/=2;

    }
        return s;
}
int main()
{
    int T,c=1;
    cin>>T;
    while(T--)
    {
        int h1,h2,c1,c2;
        int bh1,bh2,bc1,bc2;
        scanf("%d.%d.%d.%d",&h1,&h2,&c1,&c2);
        scanf("%d.%d.%d.%d",&bh1,&bh2,&bc1,&bc2);
        if(bh1==tobin(h1) && bh2==tobin(h2) && bc1==tobin(c1) && bc2==tobin(c2))
            printf("Case %d: Yes\n",c);
        else
            printf("Case %d: No\n",c);
        c++;
    }
        return 0;
}
