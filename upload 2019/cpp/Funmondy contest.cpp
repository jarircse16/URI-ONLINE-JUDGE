#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n,q;
    cin>>n>>q;
    int a[n];
    int concurrent=0;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
                concurrent++;
        }
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            if(x==1)
            {
                if(a[y-1]==1)
                concurrent--;
                a[y-1]--;
            }
            else
            {
                if(a[y-1]<=0)
                {
                    concurrent++;
                }
                a[y-1]++;
            }
            cout<<concurrent<<"\n";
        }
        return 0;
}

