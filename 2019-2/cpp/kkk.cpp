#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,int>,int> date;
    int t,u=0,n;
    string x,y;
    cin>>t;

    while(t--)
    {
        cin>>n>>x;
        /*pair<string,int> p=make_pair(x,n);
        date[p]++;*/
        //date[make_pair(x,n)]++;
        /*pair<string,int> p={x,n};
        date[p]++;*/
        date[{x,n}]++;
    }

    map<pair<string,int>,int>::iterator i;
    for(i=date.begin();i!=date.end();i++)
    {
       if(i->first.second>u)
       {
           u=i->first.second;
           y=i->first.first;
       }
    }
    cout<<u<<" "<<y;
}
