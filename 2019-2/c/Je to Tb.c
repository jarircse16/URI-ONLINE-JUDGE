#include<stdio.h>

int main()
{
    int cash_dr=0,purchase_dr=0,sale_cr=0,receiveable_dr=0,payable_cr=0,equipment_dr=0,rent_dr=0,credit,debit,cd,pud,sc,rcd,pac,ed,red,balance;
    printf("Journal Entries:\n");
    printf("Enter cashes:(enter 0 to stop)"); //1
    while(1)
    {
        scanf("%d",&cd);
        if(cd==0)
            break;
        else
            cash_dr+=cd;
    }
        printf("Enter purchases:(enter 0 to stop)"); //2
    while(1)
    {
        scanf("%d",&pud);
        if(pud==0)
            break;
        else
            purchase_dr+=pud;
    }

        printf("Enter receiveables:(enter 0 to stop)");//3
    while(1)
    {
        scanf("%d",&rcd);
        if(rcd==0)
            break;
        else
            receiveable_dr+=rcd;
    }

        printf("Enter payables:(enter 0 to stop)");//4
    while(1)
    {
        scanf("%d",&pac);
        if(pac==0)
            break;
        else
            payable_cr+=pac;
    }

        printf("Enter equipments:(enter 0 to stop)"); //5
    while(1)
    {
        scanf("%d",&ed);
        if(ed==0)
            break;
        else
            equipment_dr+=ed;
    }

        printf("Enter rents:(enter 0 to stop)");//6
    while(1)
    {
        scanf("%d",&red);
        if(red==0)
            break;
        else
            rent_dr+=red;
    }
    printf("Enter sales:(enter 0 to stop)"); //7
    while(1)
    {
        scanf("%d",&sc);
        if(sc==0)
            break;
        else
            sale_cr+=sc;
    }
    credit=sale_cr+payable_cr;
    debit=cash_dr+purchase_dr+receiveable_dr+equipment_dr+rent_dr;
    balance=sale_cr-purchase_dr-equipment_dr-rent_dr-payable_cr+receiveable_dr;
    printf("\n");
    printf("Trial Balance:\n");
    printf("Account name\t\tDebit\tCredit\n");
    printf("Cash\t\t\t%d\t\n",cash_dr);
    printf("Purchase\t\t%d\t\n",purchase_dr);
    printf("Sales\t\t\t\t%d\n",sale_cr);
    printf("Account Receivable\t%d\t\n",receiveable_dr);
    printf("Account Payable\t\t\t%d\n",payable_cr);
    printf("Equipment\t\t%d\t\t\n",equipment_dr);
    printf("Rent Expenses\t\t%d\t\n",rent_dr);
    printf("--------------------------------------\n");
    printf("Total:\t\t\t%d\t%d\n",debit,credit);
    printf("--------------------------------------\n");
    printf("Balance:%d",balance);

    return 0;
}
