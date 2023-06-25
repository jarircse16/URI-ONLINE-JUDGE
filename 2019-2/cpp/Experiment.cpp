#include<bits/stdc++.h>
using namespace std;

struct Vector{
    int a[100000];
    int s=0;
    void push_back(int x)
    {
        a[s]=x;
        s++;
    }
    int size()
    {
        return s;
    }
    void clear()
    {
        s=0;
    }
};


bool ascending_compare(int x,int y)
{
    return x<y;
}

bool descending_compare(int x,int y)
{
    return x>y;
}

#define endl "\n"
int main()
{
    Vector VV;
    VV.push_back(1);
    VV.push_back(2);
    VV.push_back(3);
    for(int i=0;i<VV.size();i++)
        cout<<VV.a[i]<<endl;
    cout<<endl;

    int a[]={3,2,4,1,5,7,10,8};
    int n=sizeof(a)/sizeof(a[0]);

    sort(a,a+n,ascending_compare);
    bool found=binary_search(a,a+n,3);
//    cout<<found<<endl;

    queue<int> q;
    stack<int> s;

    map<string,int> m;

    vector<int> v;
    list<int> l;

    //s.push();
    //s.pop();
    //s.empty();
    //s.size();
    //s.top();
//
//    q.push();
//    q.pop();
//    q.empty();
//    q.size();
//    q.front();


    v.push_back(1);
    v.push_back(2);
    v.push_back(3); // works like stack push

    v.pop_back(); //works like stack pop
    v[v.size()-1]; //works as stack.top()
    //v.clear();
    v.emplace_back(4); // works as push_back but fast

    v.begin(),v.end(); // C++ STL iterator start and end

    //for(int i=0;i<v.size();i++)
    //    cout<<v[i]<<endl;


    //vector<int>::iterator i;
    //for(i=v.begin();i!=v.end();i++)
        //cout<<*i<<endl;

    //for(auto i=v.begin();i!=v.end();i++)
        //cout<<*i<<endl;

    sort(v.begin(),v.end(),ascending_compare);

    v.erase(v.begin()+1,v.begin()+2); //erase from 1(inclusive) to 2(exclusive)
    v.insert(v.begin()+1,2);

    reverse(v.begin(),v.end());

    //for(auto x:v) //for any data structure loop
    //for(datatype/auto variable:data structure) -> range for loop
        //cout<<x<<endl;

    bool present=binary_search(v.begin(),v.end(),4);
    //cout<<present<<endl;

//    string x="bolod";
//    reverse(x.begin(),x.end());
//    for(auto i:x)
//        cout<<i<<endl;

    list<int> k; //works like stack


    //k.sort();
    //k.remove(4);
    //k.erase(i);
    //k.unique();
    /* make a list with numbers 1,1,2,4,3,5,7,3,4,1,10
    now, sort these numbers and remove the duplicates */
    k.insert(k.begin(),1);
    k.insert(k.begin(),1);
    k.insert(k.begin(),2);
    k.insert(k.begin(),4);
    k.insert(k.begin(),3);
    k.insert(k.begin(),5);
    k.insert(k.begin(),7);
    k.insert(k.begin(),3);
    k.insert(k.begin(),4);
    k.insert(k.begin(),1);
    k.insert(k.begin(),10);
    k.sort();
    k.unique();
    k.insert(k.begin(),4);
    k.remove(4); // removes all 4 from list

    list<int>::iterator li=k.begin();
    int b;
    //for(b=0;b<2;b++)
        //li++;

    //k.erase(li);

    //for(auto i:k)
       // cout<<i<<endl;
    for(/*list<int>::iterator*/auto o=k.begin();o!=k.end();o++)
        cout<<*o<<endl;
    ///// break
    map<string,int> M;

    M["jarir"]=420;
    M["abal"]=20;

    //map<string,int>::iterator mi;
    for(auto mi=M.begin();mi!=M.end();mi++)
    {
        cout<<mi->first<<" = "<<mi->second<<endl;
    }

    for(auto mi:M)
    {
        cout<<mi.first<<"="<<mi.second<<endl;
    }
    ///////
    //pair
    pair<int,int> P;
    P.first=1;
    P.second=2;
    cout<<P.first<<" - "<<P.second<<endl;
}
