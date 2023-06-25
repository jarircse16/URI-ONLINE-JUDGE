#include<stdio.h>
int a,b,c,d,mini;
float avg,result;
float calculation()
{
    mini=a;
    if(b<mini)
        mini=b;
    if(c<mini)
        mini=c;
    if(d<mini)
        mini=d;

    avg=(a+b+c+d-mini)/3.0;
    return avg;

}
int main()
{
    printf("Enter 4 numbers");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    result=calculation();
    printf("Average Marks= %.2f",result);
    return 0;
}
