#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x=sqrt(n);

    int i;
    for(i=1;i<x;i++)
    {
        if(n%i==0)
            cout << i << " " << n/i << " ";
    }
    if(n%x==0)
        cout << x;
}
