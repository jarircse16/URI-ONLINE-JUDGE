#include<stdio.h>

int repair(int x)
{
    if(x>0 || x==0)
        return x;
    else
        return (-1)*x;
}

int main()
{
/////////////////////////////////////////Input Section/////////////////////////////////////////////////////////
    printf("Journal Entries:\n");
    printf("Enter cash_cr and purchase_dr:(enter 0 to stop)"); //1
    int cashcr,purchasedr,cash_cr=0,purchase_dr=0;
    while(1)
    {
        scanf("%d %d",&cashcr,&purchasedr);
        if(cashcr==0 && purchasedr==0)
            break;
        else{
            cash_cr+=cashcr;
            purchase_dr=purchasedr;
    }
    }
        printf("Enter Cash_dr and Sales_cr:(enter 0 to stop)"); //2
        int cashdr,salescr,cash_dr=0,sales_cr=0;
    while(1)
    {
        scanf("%d %d",&cashdr,&salescr);
        if(cashdr==0 && salescr==0)
            break;
        else{
            cash_dr+=cashdr;
            sales_cr+=salescr;
    }
    }

        printf("Enter Purchase_Dr and Account Payable_Cr:(enter 0 to stop)");//3
        int purchasedr2,accountpayablecr,purchase_dr2=0,accountpayable_cr=0;
    while(1)
    {
        scanf("%d %d",&purchasedr2,&accountpayablecr);
        if(purchasedr2==0 && accountpayablecr==0)
            break;
        else
        {
            purchase_dr2+=purchasedr2;
            accountpayable_cr+=accountpayablecr;
        }

    }

        printf("Enter accounts receiveable dr and sales cr:(enter 0 to stop)");//4
        int accountreceiveabledr,salescr2,accountreceiveable_dr=0,sales_cr2=0;
    while(1)
    {
        scanf("%d %d",&accountreceiveabledr,&salescr2);
        if(accountreceiveabledr==0 && salescr2==0)
            break;
        else{
           accountreceiveable_dr+=accountreceiveabledr;
           sales_cr2+=salescr2;
    }
    }
        printf("Enter equipments_dr and cash cr :(enter 0 to stop)"); //5
        int equipmentdr,cashcr22,equipment_dr=0,cash22_cr=0;
    while(1)
    {
        scanf("%d %d",&equipmentdr,&cashcr22);
        if(equipmentdr==0 && cashcr22==0)
            break;
        else{
            equipment_dr+=equipmentdr;
            cash22_cr+=cashcr22;
    }
    }
        printf("Enter rent expence dr and cash cr:(enter 0 to stop)");//6
        int rentexpencedr,rentexpense_dr=0,cashcr3,cashcr33=0;

    while(1)
    {
        scanf("%d %d",&rentexpencedr,&cashcr3);
        if(rentexpencedr==0 && cashcr3==0)
            break;
        else{
            rentexpense_dr+=rentexpencedr;
            cashcr33+=cashcr3;
    }
    }
    printf("Enter account payable dr and cash cr:(enter 0 to stop)"); //7
    int accountpayabledr,accountpayable_dr=0,cashcr4,cashcr44=0;
    while(1)
    {
        scanf("%d %d",&accountpayabledr,&cashcr4);
        if(accountpayabledr==0 && cashcr4==0)
            break;
        else
            {
                accountpayable_dr+=accountpayabledr;
                cashcr44+=cashcr4;
            }
    }

    printf("Enter Cash Dr and account receiveable cr:(enter 0 to stop)"); //8
    int cashdr55,cash555=0,arr,arr_able=0;
    while(1)
    {
        scanf("%d %d",&cashdr55,&arr);
        if(cashdr55==0 && arr==0)
            break;
        else
            {
                cash555+=cashdr55;
                arr_able+=arr;
            }
    }
////////////////////////////////////////////////////////////////////////////Processing Section//////////////////////////
int Cash=repair(cash_cr-cash_dr+cash22_cr+cashcr33+cashcr44-cash555);
int Purchase=repair(purchase_dr+purchase_dr2);
int Sales=repair(sales_cr+sales_cr2);
int Accounts_receiveable=repair(accountreceiveable_dr-arr_able);
int Accounts_payable=repair(accountpayable_cr-accountpayable_dr);
int Equipment=repair(equipment_dr);
int Rentexpences=repair(rentexpense_dr);
int credit=Sales+Accounts_payable;
int debit=Cash+Purchase+Accounts_receiveable+Equipment+Rentexpences;
///////////////////////////////////Output Section/////////////////////////////////////

    printf("\n");
    printf("Trial Balance:\n");
    printf("Account name\t\tDebit\tCredit\n");
    printf("Cash\t\t\t%d\t\n",Cash);
    printf("Purchase\t\t%d\t\n",Purchase);
    printf("Sales\t\t\t\t%d\n",Sales);
    printf("Account Receivable\t%d\t\n",Accounts_receiveable);
    printf("Account Payable\t\t\t%d\n",Accounts_payable);
    printf("Equipment\t\t%d\t\t\n",Equipment);
    printf("Rent Expenses\t\t%d\t\n",Rentexpences);
    printf("--------------------------------------\n");
    printf("Total:\t\t\t%d\t%d\n",debit,credit);
    printf("--------------------------------------\n");
    return 0;
}
