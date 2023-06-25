#include<bits/stdc++.h>
using namespace std;

int x[]={1,1,2,2,4,4};
vector<int>v;
int z=-11111;

int main()
{
    int n=sizeof(x)/sizeof(x[0]);
    sort(x,x+n);
    v.push_back(x[0]);
    for(int i=1;i<n;i++)
    {
        if(x[i]==x[i-1])
            continue;
        v.push_back(x[i]);
    }
    for(auto i:v)
        cout<<i<<endl;

}

