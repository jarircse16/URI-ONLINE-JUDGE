#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> notes;
void init()
{
    notes["A"]=1;
    notes["A#"]=2;
    notes["B"]=3;
    notes["C"]=4;
    notes["C#"]=5;
    notes["D"]=6;
    notes["D#"]=7;
    notes["E"]=8;
    notes["F"]=9;
    notes["G"]=10;
    notes["G#"]=11;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,m;
        cin>>n>>m;
        char original[n],other[m],tune[n];
        string in;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            original[i]=notes[in];
        }
        for(int i=0;i<m;i++)
        {
            cin>>in;
            other[i]=notes[in];
        }
        cout<<"Case "<<t<<": ";
        bool yes=false;
        for(int i=0;i<11;i++)
        {
            for(int j=0;j<n;j++)
            {
                tune[j]=original[j]+i;
                if(tune[j]>11)
                    tune[j]%+11;
            }
            tune[n]='\0';
            if(strstr(tune,other))
            {
                yes=true;
                break;
            }
        }
        if(yes)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
