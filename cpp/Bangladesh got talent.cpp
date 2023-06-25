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
        int original[n],other[m];
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
        char a[n],p[n],b[m],q[m];
        int i;
        for(i=0;i<n-1;i++)
            a[i]=original[i+1]-original[i];
        a[i]='\0';
        for(i=0;i<m-1;i++)
            b[i]=other[i+1]-other[i];
        b[i]='\0';

        cout<<"Case "<<t<<": ";
        if(strstr(a,b))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
