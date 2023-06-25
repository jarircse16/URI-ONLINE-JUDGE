#include<bits/stdc++.h>
using namespace std;

void line_test(int a1,int b1,int c1,int a2,int b2,int c2)
{
    if((b1*c2-b2*c1)==0 && (c1*a2-c2*a1)==0 && (a1*b2-a2*b1)==0)
        cout<<"Same line with different coefficients";
    else if((b1*c2-b2*c1)!=0 && (c1*a2-c2*a1)!=0 && (a1*b2-a2*b1)==0)
        cout<<"Parallel lines";
    else
        cout<<"Lines intersect";
}

int main()
{
    int a1,b1,c1,a2,b2,c2;
    cout<<"Enter a1,b1,c1,a2,b2,c2 for two lines serially:";
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    line_test(a1,b1,c1,a2,b2,c2);
    return 0;

}
