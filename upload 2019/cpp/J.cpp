#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   unordered_map<int,int> m;

    for(int i=0;i<n;i++)
       m[a[i]]++;

    if(m.size()==1)
       cout<<"Possible\n";
    else
        cout<<"Impossible\n";
}
