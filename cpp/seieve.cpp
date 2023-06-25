#include<bits/stdc++.h>
using namespace std;

int PRIME[1000];
/*
value is -1 if prime
0 if not prime
*/
void sieve(int n)
{
    int i=4,j;
    PRIME[1]=1;
    for(;i<=n;i+=2)
        PRIME[i]=0;
    for(i=3;i<=sqrt(n);i+=2)
        for(j=3;i*j<=n;j+=2)
            PRIME[i*j]=0;
}

int main()

{
    int i;
    memset(PRIME,-1,sizeof(PRIME));
    sieve(1000);
    for(i=0;i<1000;i++)
    {
        if(PRIME[i]==-1)
            printf("%d is prime\n",i);
        else
            printf("%d isn't prime\n",i);
    }

}
