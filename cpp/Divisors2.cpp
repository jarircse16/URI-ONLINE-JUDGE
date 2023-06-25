#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,i,c=0;
    cin >> r;
    for(i=1;i<r;i++)
    {
        if(r%i==0)
            c++;
    }
    cout << c;
}
