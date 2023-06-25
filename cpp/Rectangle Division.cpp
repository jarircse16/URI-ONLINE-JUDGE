#include<bits/stdc++.h>
using namespace std;
#define inf 1<<28
struct point
{
    double x,y;
    point(double x,double y)
    {
        this->x=x;
        this->y=y;
    }
};
bool operator<(point a,point b)
{
    if(a.x==b.x) return a.y<b.y;
    return a.x<b.x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x,y,r,c,px,py;
        cin>>x>>y>>r>>c>>px>>py;
        point one(x,y),two(x+c,y+r);
        double slope1,slope2;

        double p=r/2.0;

        if(one.x-px==0)slope1=inf;
        else slope1=(one.y-py)/(one.x-px);

        if(two.x-px==0) slope2=inf;
        else slope2=(two.y-py)/(two.x-px);

        int C=1000;

        while(C--)
        {
            if(one.x-px==0)slope1=inf;
            else slope1=(one.y-py)/(one.x-px);

            if(two.x-px==0) slope2=inf;
            else slope2=(two.y-py)/(two.x-px);

            if(slope1<slope2)
            {
                one.y+=p;
                two.y-=p;
                p/=2.0;
            }
            else
            {
                one.y-=p;
                two.y+=p;
                p/=2.0;
            }
        }

        if(fabs(slope1-slope2)>0.0000001)
        {
            if(one<two)
            {
                cout<<one.x<<" "<<one.y<<"\n";
                cout<<two.x<<" "<<two.y<<"\n";
            }
            else
            {
                cout<<two.x<<" "<<two.y<<"\n";
                cout<<one.x<<" "<<one.y<<"\n";
            }
            continue;
        }

        one.x=x;
        one.y=y;
        two.x=x+c;
        two.y=y+r;

        if(one.x-px==0) slope1=inf;
        else slope1=(one.y-py)/(one.x-px);

        if(two.x-px==0) slope2=inf;
        else slope2=(two.y-py)/(two.x-px);
        p=r/2.0;

        C=1000;
        cout<<p<<endl;
        cout<<r<<endl;
        cout<<one.x<<" "<<one.y;
        return 0;
        while(C--)
        {
            if(one.x-px==0)slope1=inf;
            else slope1=(one.y-py)/(one.x-px);

            if(two.x-px==0) slope2=inf;
            else slope2=(two.y-py)/(two.x-px);

            if(slope1<slope2)
            {
                one.x+=p;
                two.x-=p;
                p/=2.0;
            }
            else
            {
                one.x-=p;
                two.x+=p;
                p/=2.0;
            }
        }
        if(fabs(slope1-slope2)>0.0000001)
        {
            if(one<two)
            {
                cout<<one.x<<" "<<one.y<<"\n";
                cout<<two.x<<" "<<two.y<<"\n";
            }
            else
            {
                cout<<two.x<<" "<<two.y<<"\n";
                cout<<one.x<<" "<<one.y<<"\n";
            }
        }
    }
}
