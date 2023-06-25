#include<iostream>
using namespace std;
int bal(int n)
{
    int c=0;
    while(1){
    if(n%2==0)
           n=n/2;
        else
            n=3*n+1;
        c++;
    if(n==1)
        break;
}
    return c;
}
int max(int m,int n)
{
    if(m>n)
        return m;
    else
        return n;
}
int main()
{
    int i,j;
    cin>>i>>j;
    cout<<i<<j<<max(bal(i),bal(j))<<endl;
    return 0;
}
