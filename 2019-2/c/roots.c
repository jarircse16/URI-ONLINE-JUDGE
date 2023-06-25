#include<stdio.h>
#include<math.h>
int main()
{
    eqn :
    printf("Enter the value of a b & c with a comma :  ");
    float a,b,c,d,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    d = sqrt(b*b - 4*a*c) ;

    if (d<0){
        printf("Unreal Roots Sorry You can Try again");
        printf("\n Do you want to try again?? Input y or n");
        char ch;
        scanf("%c",&ch);
        if(ch=='y'){
         goto eqn;
        }
        else if (ch=='n'){
            printf("Good Bye");
        }
    }
    else if(d==0){
            x1=(-1)*b/2*a;
        x2=(-1)*b/2*a;
        printf("Equal roots and they are : %f  %f ", x1,x2);
         printf("\n Do you want to try again?? Input y or n");
        char ch;
        scanf("%c",&ch);
        if(ch=='y'){
         goto eqn;
        }
        else if (ch=='n'){
            printf("Good Bye");
        }


    }
    else if(d>0){
            x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;
        printf("Real Roots\n");
        printf("They are :  %f  %f  ", x1,x2);
     printf("\n Do you want to try again?? Input y or n");
        char ch;
        scanf("%c",&ch);
        if(ch=='y'){
         goto eqn;
        }
        else if (ch=='n'){
            printf("Good Bye");
        }
    }

    return 0;
}
