#include<bits\stdc++.h>
#include<string.h>
#include<string>
#include<stdlib.h>
using namespace std;

char s[10000000],revd[100000000],crypted[100000000],decrypted[100000000];
int n,x;
void revstr()
{

    for(int i=n,j=1;s[i]!='\0';i--,j++)
    {
        revd[j]=s[i];
    }
}

void encrypto()
{

    for(int j=1;revd[j]!='\0';j++)
    {
        revd[j]+=x;
    }
    for(int i=1,k=1;s[i]!='\0';i++,k++)
    {
        if(k%2==0)
            crypted[k]=x+k;
        else
            crypted[k]=revd[i];
    }
    int p=strlen(crypted);
    for(int a=1;crypted[a]!='\0';a++)
        cout<<crypted[a];



}

void decrypto()
{
    revstr();
    for(int j=1;s[j]!='\0';j++)
    {
        revd[j]-=x;
    }
    for(int i=1,k=1;s[i]!='\0';i++,k++)
    {
        if(k%2==0)
            crypted[k]='\0';
        else
            decrypted[k]=revd[i];
    }
    int q=strlen(crypted);
    for(int b=1;decrypted[b]!='\0';b++)
        cout<<decrypted[b];

}

int main()
{
    n=strlen(s);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<"Enter your string:";
        cin>>s;
        int choice;
        again:cout<<"1 for encrypt, 2 for decrypt,3 exit:\nMake a choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                encrypto();
                break;
            }
            case 2:
            {
                decrypto();
                break;
            }
            case 3:
            {
                goto exit;
            }
            default:
            {
                goto again;
            }
        }

    }
    exit:return 0;
}


