#include<bits/stdc++.h>
using namespace std;
typedef struct item
{
    double r,w,v;
};

bool comp(item a,item b)
{
    return a.r>b.r;
}
int main()
{
    double weight=50;
    double value=0;
    int n;
    cin >> weight;
    cin >> n;
    int i;
item items[n];
    for(i=0;i<n;i++)
    {
        cin >> items[i].w >> items[i].v;
        items[i].r=items[i].v/items[i].w;
    }
    sort(items,items+n,comp);
    for(i=0;i<n;i++)
    {
        if(weight>=items[i].w)
        {
            value+=items[i].v;
            weight-=items[i].w;
        }
    }
    if(weight>0)
    {
        value+=items[i-1].r*weight;
        weight=0;
    }
    cout << value;
    return 0;
}
