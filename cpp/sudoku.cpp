#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s[9][9],i,j;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
        {
            scanf("%d",&s[i][j]);
        }
    bool correct=true;
    for(i=0;i<9;i++)
    {
        int a=0,b=0;
        for(j=0;j<9;j++)
        {
            a+=s[i][j];
            b+=s[j][i];
        }
        if(a!=45 || b!=45)
        {
            correct=false;
            break;
        }
    }
    if(correct)
        cout << "Congratulations!";
    else
        cout<< "Oh No!";
}
