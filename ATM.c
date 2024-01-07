#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define clrscr() system("cls")
void design ();

void createaccount ();

void deposit ();

void withdraw ();

void balance ();

void displayaccount ();

struct ATM 
{
  
int acno;
   
char name[20];
   
int amount;
 
};
struct ATM a1[2];

 
int
main ()
{
  
int getch ();
  
int choice = 0;
  
int count = 0;
  
int n1, n2, n3, n4;
  
 
clrscr ();

PIN:printf ("\nPlease Enter Your PIN:");
  
 
scanf ("%1d%1d%1d%1d", &n1, &n2, &n3, &n4);
  
count++;
  
    //printf("*");
    //scanf("%d",&n2);
    //printf("*");
    //scanf("%d",&n3);
    //printf("*");
    //scanf("%d",&n4);
    //printf("*");
    if (n1 == 8 && n2 == 9 && n3 == 0 && n4 == 5)
    
    {
      
      do
	
	{
	  
design ();
	  
printf ("\nEnter Your Choice :");
	  
scanf ("%d", &choice);
	  
switch (choice)
	    
	    {
	    
case 1:
	      
createaccount ();
	      
break;
	    
case 2:
	      
deposit ();
	      
break;
	    
case 3:
	      
withdraw ();
	      
break;
	    
case 4:
	      
balance ();
	      
break;
	    
case 5:
	      
displayaccount ();
break;
	    
case 6:
	      
exit (0);
	    
default:
	      
printf ("Envalid Choice...");
	      
break;
	    
}
	
}
      while (choice != 6);
    
 
}
  
  else
    
    {
      
printf ("\nEnvalid PIN");
      
if (count == 3)
	{
	  
exit (0);
	
}
      
      else
	
goto PIN;
    
}

 
}


void
design ()
{
  
printf ("\n*********** ATM Banking Managment System *************");
  
printf ("\n1. Create Account");
  
printf ("\n2. Deposit Amount");
  
printf ("\n3. Withdraw Amount");
  
printf ("\n4. Chack Balance");
  
printf ("\n5. Display Account");
  
printf ("\n6. Exit");
  
printf ("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++");

} 
void

createaccount ()
{
  
int i;
  
for (i = 0; i < 2; i++)
    {
      
printf ("\nEnter Account Number:");
      
scanf ("%d", &a1[i].acno);
      
printf ("\nEnter Your Name:");
      
scanf ("%s", a1[i].name);
      
printf ("\nEnter Amount:");
      
scanf ("%d", &a1[i].amount);
    
}

}


void
displayaccount ()
{
  
int i;
  
printf ("\nAccount NO.\tName   \tBalance");
  
for (i = 0; i < 2; i++)
    {
      
printf ("\n\t %d", a1[i].acno);
      
printf ("\t%s", a1[i].name);
      
printf ("\t%d", a1[i].amount);
    
}

 
}


void
deposit ()
{
  
int accno, i;
  
int amt, f = 0;
  
printf ("\nEnter Account Number:");
  
scanf ("%d", &accno);
  
for (i = 0; i < 2; i++)
    {
      
if (a1[i].acno == accno)
	{
	  
f = 1;
	  
printf ("\nName: %s", a1[i].name);
	  
printf ("\nEnter An Amount For Deposit:");
	  
scanf ("%d", &amt);
	  
if (amt < 0)
	    {
	      
printf ("\nInvalid Amount");
	      
printf ("\nPlease Enter Valid Amount");
	    
}
	  
	  else
	    
a1[i].amount = a1[i].amount + amt;
	  
printf ("\nNow Your Balance is: %d", a1[i].amount);
	  
break;
	
}
    
}
  
if (f == 0)
    
printf ("\nInvalid Account No... Please Check");

 
}


void
withdraw ()
{
  
int accno, i;
  
int amt, f = 0;
  
printf ("\nEnter Account Number:");
  
scanf ("%d", &accno);
  
for (i = 0; i < 2; i++)
    {
      
if (a1[i].acno == accno)
	{
	  
f = 1;
	  
printf ("\nName: %s", a1[i].name);
	  
printf ("\nEnter Amount For Withdrawal: ");
	  
scanf ("%d", &amt);
	  
if (amt < 0)
	    {
	      
printf ("\nInvalid Amount");
	    
}
	  
if (amt > a1[i].amount)
	    {
	      
printf ("\nInsufficient Balance");
	    
}
	  
	  else
	    
a1[i].amount = a1[i].amount - amt;
	  
printf ("\nNow Your Balance is: %d", a1[i].amount);
	  
break;
	
}
    
}
  
if (f == 0)
    
printf ("\nInvalid Account No... Please Check");

}


void
balance ()
{
  
int accno, i;
  
printf ("\nEnter Account Number:");
  
scanf ("%d", &accno);
  
for (i = 0; i < 2; i++)
    {
      
if (a1[i].acno == accno)
	{
	  
printf ("\nAccount Number %d", a1[i].acno);
	  
printf ("\nName: %s", a1[i].name);
	  
printf ("\nBalance: %d", a1[i].amount);
	
}
    
}

}



