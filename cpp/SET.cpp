#include<bits/stdc++.h>
using namespace std;
bitset<100001> sets[100001];
map<bitset<100001>,int> same;

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
            sets[i][o]=1;
        }
        same[sets[i]]++;
    }

    int x,y,l,r,co;
    while(q--)
    {
        co=0;
        cin>>x>>y>>l>>r;
        l--;r--;
        x--;y--;
        bitset<100001> in=sets[x]&sets[y];
        for(;l<=r;l++)
        {
            if(sets[l]==in)
            {
                co=same[in];
                break;
            }
        }
        cout<<co<<"\n";
    }
}
