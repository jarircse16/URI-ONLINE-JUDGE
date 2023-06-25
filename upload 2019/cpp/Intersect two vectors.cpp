#include<bits/stdc++.h>
using namespace std;

vector<int> a={1,2,4,7,8,9},b={3,4,5,6,7,8};
int na=a.size(),nb=b.size();

int main()
{
/*Complexity=O(n*n)*/
    for(auto i=0;i<na;i++)
        for(auto j=0;j<nb;j++)
        {
            if(a[i]==b[j])
                cout<<a[i]<<" ";
        }
    cout<<endl;
/*Complexity=O(n*logn)*/
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<na && j<nb)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else
        {
            if(a[i]>b[j]) j++;
            else if(a[i]<b[j]) i++;
        }
    }
}
