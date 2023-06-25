#include<bits/stdc++.h>
using namespace std;
#define inf 1<<28
#define err 0.01
#define dbg(x) cout << #x << "=" << x << "\n"
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        double x,y,r,c,px,py;
        cin>>x>>y>>r>>c>>px>>py;
        point one(x,y),two(x+c,y+r),three(x,y),four(x+c,y+r);
        double slope1,slope2,slope3,slope4;

        double p1=r/2.0,p2=c/2.0;
        do
        {
            if(one.x-px==0)slope1=inf;
            else slope1=(one.y-py)/(one.x-px);

            if(two.x-px==0) slope2=inf;
            else slope2=(two.y-py)/(two.x-px);

            if(three.x-px==0)slope3=inf;
            else slope3=(three.y-py)/(three.x-px);

            if(four.x-px==0) slope4=inf;
            else slope4=(four.y-py)/(four.x-px);

            if(slope1<slope2)
            {
                one.y+=p1;
                two.y-=p1;
                p1/=2.0;
            }
            else
            {
                one.y-=p1;
                two.y+=p1;
                p1/=2.0;
            }

            if(slope3<slope4)
            {
                three.x+=p2;
                four.x-=p2;
                p2/=2.0;
            }
            else
            {
                three.x-=p2;
                four.x+=p2;
                p2/=2.0;
            }
        }
        while((fabs(fabs((slope1))-fabs((slope2)))>err && slope1*slope2>0) || (fabs(fabs((slope3))-fabs((slope4)))>err) && slope3*slope4>0);
        if(px-one.x==0) slope1=inf; else slope1=((py-one.y)/(px-one.x));
        if(one.x-two.x==0) slope2=inf; else slope2=((one.y-two.y)/(one.x-two.x));
        if(px-three.x==0) slope3=inf; else slope3=((py-three.y)/(px-three.x));
        if(three.x-four.x==0) slope4=inf; else slope4=((three.y-four.y)/(three.x-four.x));

        if(slope1==slope2)
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
        if(slope3==slope4)
        {
            if(three<four)
            {
                cout<<three.x<<" "<<three.y<<"\n";
                cout<<four.x<<" "<<four.y<<"\n";
            }
            else
            {
                cout<<four.x<<" "<<four.y<<"\n";
                cout<<three.x<<" "<<three.y<<"\n";
            }
        }
    }
}
