#include<bits/stdc++.h>
//#include<numeric>
using namespace std;

#define endl "\n"

int a[]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(a)/sizeof(int);
int b[10];
vector<int>c;

int32_t main()
{
    for(auto i=0;i<10;i++)
        c.push_back(i*i);
    cout<<accumulate(a,a+n,0)<<"\n"; //sum in range+ value
    adjacent_difference(a,a+n,b);
    adjacent_difference(a,a+n,c.begin());
    for(int i=0;i<10;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    for(auto i:c)
        cout<<i<<" ";
    cout<<endl;
}
