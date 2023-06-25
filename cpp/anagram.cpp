#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x[99],y[99];
    cin >>x >>y;
    int i,xs=0,ys=0;
    int size_x=strlen(x),size_y=strlen(y);
    if(size_x!=size_y)
        cout << "No\n";
    else
    {
        for(i=0;i<size_x;i++)
        {
            xs+=x[i];
            ys+=y[i];
        }
        if(xs==ys)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
