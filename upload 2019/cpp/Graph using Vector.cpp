#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];

int m=-1;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int from,to;
        cin>>from>>to;
        m=max(m,max(from,to));
        adj_list[from].push_back(to);
    }
    for(int i=1;i<=m;i++)
    {
        cout<<i<<" : ";
        for(int j=0;j<adj_list[i].size();j++)
            cout<<adj_list[i][j]<<" , ";
        cout<<"\n";
    }
}
