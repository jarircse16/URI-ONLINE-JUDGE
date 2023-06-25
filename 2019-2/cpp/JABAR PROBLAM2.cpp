#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>date;
    int t,u=0;
    string x,y;
    cin>>t;
    getline(cin,x);

    while(t--)
    {
        getline(cin,x);
        date[x]++;
    }

    map<string,int>::iterator i;
    for(i=date.begin();i!=date.end();i++)
    {
       if(i->second>u)
       {
           u=i->second;
           y=i->first;
       }
    }
    cout<<y;


}
