#include<bits/stdc++.h>
//#include<stack>
using namespace std;

stack<string>forw,bacw;
string now="http://www.lightoj.com/";
void Back()
{
    if(bacw.empty())
        cout<<"Ignored\n";
    else
    {
        forw.push(now);
        now=bacw.top();//
        bacw.pop();
        cout<<now<<"\n";
    }
}
void Fora()
{
    if(forw.empty())
        cout<<"Ignored\n";
    else
    {
        bacw.push(now);
        now=forw.top();//
        forw.pop();
        cout<<now<<"\n";
    }
}

void visit(string x)
{
    bacw.push(now);
    while(!forw.empty())
    {
        forw.pop();
    }
    now=x;
    cout<<now<<"\n";
}


int main()
{

    int T,c=1;
    cin>>T;
    while(T--)
    {
        printf("Case %d:\n",c);
        while(1)
        {
            string s;
            cin>>s;
            if(s=="BACK")
            {
                Back();
            }
            else if(s=="FORWARD")
            {
                Fora();
            }
            else if(s=="VISIT")
            {
                string a;
                cin>>a;
                visit(a);
            }
            else if(s=="QUIT")
            {
                break;
            }
        }
    }

}

