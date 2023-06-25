#include<bits/stdc++.h>
using namespace std;

int main()

{

int n,c=0,a=1,b=10,x,max=0;



cin>>a>>b;

for(x=a;x<=b;x++)

{

c=0; // counter zero kore nibi..

n=x;

while(1)

{

if(n%2==0)

n=n/2;

else

n=3*n+1;

c++;

if(n==1) break;

}

c++;

if(c>max) max=c;

}

cout<<a<<" " <<b <<" "<<max <<endl;
return 0;

}
