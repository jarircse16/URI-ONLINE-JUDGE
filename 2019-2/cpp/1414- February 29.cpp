#include<bits/stdc++.h>
using namespace std;

int isleap(int y)
{
    if(y%400==0)
        return 1;
    else if(y%4==0 && y%100!=0)
        return 1;
    return 0;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char m1[20],m2[20];
        int d1,d2,y1,y2;
        scanf("%s %d, %d",m1,&d1,&y1);
        scanf("%s %d, %d",m2,&d2,&y2);
        int m11,m22;
        if(strcmp(m1,"January")==0)m11=1;
        if(strcmp(m1,"February")==0)m11=2;
        if(strcmp(m1,"March")==0)m11=3;
        if(strcmp(m1,"April")==0)m11=4;
        if(strcmp(m1,"May")==0)m11=5;
        if(strcmp(m1,"June")==0)m11=6;
        if(strcmp(m1,"July")==0)m11=7;
        if(strcmp(m1,"August")==0)m11=8;
        if(strcmp(m1,"September")==0)m11=9;
        if(strcmp(m1,"October")==0)m11=10;
        if(strcmp(m1,"November")==0)m11=11;
        if(strcmp(m1,"December")==0)m11=12;
        if(strcmp(m2,"January")==0)m22=1;
        if(strcmp(m2,"February")==0)m22=2;
        if(strcmp(m2,"March")==0)m22=3;
        if(strcmp(m2,"April")==0)m22=4;
        if(strcmp(m2,"May")==0)m22=5;
        if(strcmp(m2,"June")==0)m22=6;
        if(strcmp(m2,"July")==0)m22=7;
        if(strcmp(m2,"August")==0)m22=8;
        if(strcmp(m2,"September")==0)m22=9;
        if(strcmp(m2,"October")==0)m22=10;
        if(strcmp(m2,"November")==0)m22=11;
        if(strcmp(m2,"December")==0)m22=12;
        int y,l=0;
        for(y=y1+1;y<y2;y++)
        {
            l+=isleap(y);
        }

        if(isleap(y1) && m11<=2 && d1<=29) l++;
        if(isleap(y2) && m22>=2 && d2>=29) l++;
        cout<<l<<"\n";


    }
}
