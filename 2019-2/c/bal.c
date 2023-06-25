#include<stdio.h>
#include<string.h>

unsigned long long dc(unsigned long long n)
{
    unsigned long long i=0;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    return i;
}
unsigned long long rc(unsigned long long n)
{
    unsigned long long i=10;
    if(dc(n)<13)
    {
        while(dc(n)!=13)
        {
            n=n*i;
            i--;
        }
        return n;
    }
    else if(dc(n)>13)
    {
        while(dc(n)!=13)
        {
            n=n/i;
            i++;
        }
        return n;
    }
    else
        return n;
}
unsigned long long nc(unsigned long long n)
{
    if(dc(n)!=13)
        {
            rc(n);
        }
    unsigned long long c,o,s;
    c=n/100000000000;
    o=(n/100000000)%1000;
    s=n%100000000;
    return (s*s*s+3*s*s*o+3*s*o*c+s*o*c*c)%10000000000000000; //This works fine but when trying to keep digits constant,repeat occurs.
}

void main()
{
    unsigned long long n=999999999999999999999999;
    printf("%llu\n",nc(n));
}
