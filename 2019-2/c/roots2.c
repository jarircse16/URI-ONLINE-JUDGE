#include<stdio.h>
#include<math.h>
int roots(int a,int b,int c)
{
    if(b*b-4*a*c<0)
    {
        printf("No real roots");
        return 0;
    }
    else if(b*b-4*a*c==0)
    {
        printf("Roots are real and equal\n");
        printf("Root=%f",(-b)/(2*a));
        return 0;
    }
    else
    {
        printf("Roots are real but unequal\n");
        printf("1st root:%f\n",(-b+sqrt(b*b-4*a*c))/(2*a));
        printf("2nd root:%f\n",(-b-sqrt(b*b-4*a*c))/(2*a));
        return 0;
    }
}

int main()
{
    int a,b,c;
    printf("Enter a,b,c for ax*x+bx+c=0:");
    scanf("%d %d %d",&a,&b,&c);
    roots(a,b,c);
    return 0;
}
