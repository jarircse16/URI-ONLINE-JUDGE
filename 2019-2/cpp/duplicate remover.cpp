#include<bits/stdc++.h>
using namespace std;

int x[]={1,1,2,2,4,4};
vector<int>v;
int z=-11111;

int main()
{
    int n=sizeof(x)/sizeof(x[0]);

    for(int i=0;i<n;i++)
    {
        if(x[i]==z) continue;
        v.push_back(x[i]);
        for(int j=i+1;j<n;j++)
            if(x[j]==x[i])
                x[j]=z;
    }
    for(auto i:v)
        cout<<i<<endl;

}
