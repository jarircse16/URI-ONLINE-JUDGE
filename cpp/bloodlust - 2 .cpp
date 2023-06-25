#include<bits/stdc++.h>
using namespace std;
///wolfram alpha
#define Sqrt sqrt
#define Power pow
/*
CForm[-((-25 - 5 r + 3 r^2) (-((r (5 + r))/(-25 - 5 r + 3 r^2)) - (Sqrt[3] Sqrt[r^2])/(Sqrt[3] Sqrt[r^2] + Sqrt[5] Sqrt[(-125 - 100 r + 20 r^2 + 16 r^3)/(5 + r)^2])))/(2 (5 + r))+r]
*/
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double r;
        cin>>r;
        double a=r - ((-25.0 - 5.0*r + 3.0*Power(r, 2))*(-((r*(5.0 + r))/(-25.0 - 5.0*r + 3.0*Power(r, 2))) - (Sqrt(3.0)*Sqrt(Power(r, 2)))/(Sqrt(3.0)*Sqrt(Power(r, 2)) + Sqrt(5.0)*Sqrt((-125.0 - 100.0*r + 20.0*Power(r, 2) + 16.0*Power(r, 3))/Power(5.0 + r, 2)))))/(2.0*(5.0 + r));
        printf("%0.5f\n",a);
    }
}
