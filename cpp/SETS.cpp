#include<bits/stdc++.h>
using namespace std;
set<int> sets[100001];
map<pair<set<int>,int>,int> same;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,c,o;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        while(c--)
        {
            cin>>o;
            sets[i].insert(o);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            same[{sets[i],j}]=same[{sets[i],j-1}]+(sets[i]==sets[j]);
        }
    }/*
    for(int i=0;i<n;i++)
    {
        cout << "Set " << i << endl;
        for(int j=0;j<n;j++)
        {
            cout << same[{sets[i],j}] << endl;
        }
    }*/
    while(q--)
    {
        int x,y,l,r,co=0;
        cin>>x>>y>>l>>r;
        x--;y--;l--;r--;
        set<int> intersect;
        set_intersection(sets[x].begin(),sets[x].end(),sets[y].begin(),sets[y].end(),std::inserter(intersect,intersect.begin()));
        co=same[{intersect,r}]-same[{intersect,l-1}];
        cout<<co<<"\n";
    }
}
