#include<bits\stdc++.h>

using namespace std;

int a,b,c,d,mini;
float avg;

float calculation()
{
    mini=a;
    if(b<mini)
        mini=b;
    if(c<mini)
        mini=c;
    if(d<mini)
        mini=d;

    avg=(a+b+c+d-mini)/3.0;
    return avg;

}

int main()
{
    cout<<"Enter 4 numbers";
    cin>>a>>b>>c>>d;
    float result=calculation();
    cout<<"Average Marks:"<<result;
    return 0;

}
