#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define clrscr() system("cls")
void design();
void createaccount();
void deposit();
void withdraw();
void balance();
struct ATM
{
   int  acno ;
   char name[20];
   int amount;
};struct ATM a1;

int main(){
    int getch();
    int choice=0;
    int count=0;
    int n1,n2,n3,n4;

    clrscr();
    PIN: printf("\nPlease Enter Your PIN:");
    
    scanf("%1d%1d%1d%1d",&n1,&n2,&n3,&n4);
    count++;
    //printf("*");
    //scanf("%d",&n2);
    //printf("*");
    //scanf("%d",&n3);
    //printf("*");
    //scanf("%d",&n4);
    //printf("*");
    if(n1==8 && n2==9 && n3==0 && n4==5)
    {
        do
        {
            design();
            printf("\nEnter Your Choice :");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
                createaccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                balance();
                break;
            case 5:
                break;
            default:
                printf("Envalid Choice.........");
                break;
            }
        }while (choice!=5);

    }
    else
    {
    printf("\nEnvalid PIN");
        if(count == 3){
            exit(0);
        }
        else
        goto PIN;
    }
   
}
void design(){
    printf("\n*********** ATM Banking Managment System *************");
    printf("\n1. Create Account");
    printf("\n2. Deposit Amount");
    printf("\n3. Withdraw Amount");
    printf("\n4. Chack Balance");
    printf("\n5. Exit");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");
}
void createaccount(){
    printf("\nEnter Account Number:");
    scanf("%d",&a1.acno);
    printf("\nEnter Your Name:");
    scanf("%s",a1.name);
    printf("\nEnter Amount:");
    scanf("%d",&a1.amount);
}
void deposit(){
    int amt;
    printf("\nEnter An Amount For Deposit:");
    scanf("%d",&amt);
    if(amt<0){
        printf("\nInvalid Amount");
        printf("\nPlease Enter Valid Amount");
    }
    else
    a1.amount=a1.amount+amt;
    printf("\nNow Your Balance is: %d",a1.amount);
}
void withdraw(){
    int amt;
    printf("\nEnter Amount For Withdrawal: ");
    scanf("%d",&amt);
    if(amt<0){
        printf("\nInvalid Amount");
    }
    if(amt>a1.amount){
        printf("\nInsufficient Balance");
    }
    else
    a1.amount=a1.amount-amt;
    printf("\nNow Your Balance is: %d",a1.amount);
}
void balance(){
    printf("\nAccount Number %d",a1.acno);
    printf("\nName: %s",a1.name);
    printf("\nBalance: %d",a1.amount);
}


