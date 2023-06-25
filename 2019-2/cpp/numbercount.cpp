#include<bits/stdc++.h>
using namespace std;

int x[]={1,1,2,2,2,4,4,5,5,6};
int n=sizeof(x)/sizeof(x[0]);
vector<int> v;
int m=0;
map<int,int> cou;

vector<int> p,q;

int P[1000],Q[1000],a=0;

vector<pair<int,int>> VV;

void dRemover()
{
    for(int i=0;i<n;i++)
    {
        if(x[i]==m) continue;
        v.push_back(x[i]);

        //
        int c=1;
        for(int j=i+1;j<n;j++)
            if(x[j]==x[i])
                x[j]=m,c++;
        //cout<<x[i]<<" - "<<c<<endl;
        //cou[x[i]]=c;

        //p.push_back(x[i]);
        //q.push_back(c);

        //P[a]=x[i];
        //Q[a]=c;
        //a++;

        VV.push_back(make_pair(x[i],c));
    }

}

int main()
{
    dRemover();
    //for(auto i:cou)
      //  cout<<i.first<<" "<<i.second<<endl;

      //for(int i=0;i<p.size();i++)
        //cout<<p[i]<<"->"<<q[i]<<endl;

   // for(int e=0;e<a;e++)
     //   cout<<P[e]<<"="<<Q[e]<<endl;

     for(auto i:VV)
        cout<<i.first<<"="<<i.second<<endl;
     for(int i=0;i<VV.size();i++)
        cout<<VV[i].first<<"="<<VV[i].second<<endl;
     for(/*vector<pair<int,int>>::iterator*/auto it=VV.begin();it!=VV.end();it++)
        cout<<it->first<<"="<<it->second<<endl;
}
