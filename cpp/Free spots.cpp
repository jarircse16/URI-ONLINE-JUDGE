#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    char field[r][c];
    for(int i=0;i<r;i++)
        scanf("%s",field[i]);
    int free_spot=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(field[i][j]=='*')
                continue;
            int x,y;
            bool right,left,up,down;
            right=left=up=down=false;

            //Right
            x=i;y=j+1;
            if(y>=c) right=true;
            else if(field[x][y]=='.') right=true;
            //Left
            x=i;y=j-1;
            if(y<0) left=true;
            else if(field[x][y]=='.') left=true;
            //Up
            x=i-1;y=j;
            if(x<0) up=true;
            else if(field[x][y]=='.') up=true;
            //Down
            x=i+1;y=j;
            if(x>=r) down=true;
            else if(field[x][y]=='.') down=true;
            if(right && left && up && down)
                free_spot++;
        }
    }
    cout << free_spot;
}
