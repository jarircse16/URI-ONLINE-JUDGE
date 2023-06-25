#include<bits/stdc++.h>
#include<cmath>
#include<math.h>

using namespace std;

int main()
{
    int T,i;
    cin>>T;
    while(T--)
    {
        i=1;
        double ox,oy,ax,ay,bx,by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double r=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay)); //oa=ob=r
        double m1=(oy-ay)/(ox-ax);
        double m2=(oy-by)/(ox-bx);
        double theta=atan(fabs((m1-m2)/(1+m1*m2)));
        double s=r*theta;
        printf("Case %d: %f",i,s);
        i++;
    }
    return 0;

}
