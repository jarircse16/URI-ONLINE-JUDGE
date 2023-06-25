#include <bits/stdc++.h>
using namespace std;

void divisors(int n,int x,int i)
{
    if(i<=x)
    {
        if(n%i==0)
        {
            cout << i << " ";
            divisors(n,x,i+1);
            if(n/i!=i)
            cout << n/i << " ";
        }
        else
            divisors(n,x,i+1);
    }
}

int main()
{
    int n;
    cin >> n;
    divisors(n,sqrt(n),1);

}
