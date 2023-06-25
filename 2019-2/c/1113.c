#include<stdio.h>

struct url
{
    url *next,*prev;
    char now[8192];
};

url *root;
char in[100];

void next()
{
    if(root->next!=NULL)
    {
        root=root->next;
        printf("%s\n",root->now);
    }
    else
    {
        printf("Ignored\n");
    }
}
void back()
{
    if(root->prev!=NULL)
    {
        root=root->prev;
        printf("%s\n",root->now);
    }
    else
    {
        printf("Ignored\n");
    }
}
void visit()
{
    url *New=(url*)malloc(sizeof(url));
    strcpy(New->url,in);
    root->next=New;
    if(root!=NULL)
        New->prev=root;
    root=New;
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        printf("Case %d:\n",t);
        while(1)
        {
            char x[100];
            scanf("%s",x);
            if(strcmp("VISIT",x)==0)
            {
                scanf("%s",in);
                visit();
            }
            else if(strcmp("BACK",x)==0) Back();
            else if(strcmp("FORWARD",x)==0) next();
            else break;
        }
    }
}
