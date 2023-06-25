#include<bits/stdc++.h>
using namespace std;

string Hash(string in)
{
    string r;
    int x=r.length()%10;
    if(x!=0)
    {
        x=10-x;
        while(x--) cout << "0";
    }
    cout << in;
    int l=in.length();

    string arr[l/10];
    int j=0;
    for(int i=0;i<l;i++)
    {
        arr[j][i%10]=in[i];
        if(i%10==0 && i!=0) j++;
    }
    cout << arr[0];
}
int main()
{
    Hash("asadsd");
    return 0;
}
