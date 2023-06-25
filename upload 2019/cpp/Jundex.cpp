#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x;
    cin>>n;
    unordered_map<int,int> m;
    for(i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
    }
    if(m.size()==1)
       cout<<"Possible\n";
    else
        cout<<"Impossible\n";
}
