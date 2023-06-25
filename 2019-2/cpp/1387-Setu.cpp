#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,c=1;
    cin>>T;
    while(T--)
    {
        cout<<"Case"<<" "<<c<<":"<<"\n";
        int o,a=0;
        cin>>o;
        while(o--)
        {
            string s;
            cin>>s;
            if(s=="donate")
            {
                int t;
                cin>>t;
                a+=t;
            }
            else
            {
                cout<<a<<endl;
            }
        }
        c++;
    }
}
