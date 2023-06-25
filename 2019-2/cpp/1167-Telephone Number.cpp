#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int l,f=0;
        cin>>l;
        char s[l];
        scanf(" %s",s);
        int i;
        for(i=0;i<l;i++)
        {
            if(s[i]=='8')
                if(l-i>=11)
                {
                    f=1;
                    break;
                }
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
