#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int ch,balance=1000,amt;
    char opt;
    
    printf("***Welcome to the bank***\n");
    menu:
    system("cls");
    printf("1. Check Balance\n");
    printf("2. Deposit money\n");
    printf("3. Withdraw money\n");
    printf("4. Exit\n");
    printf("*********************\n");
    again:
    printf("Choose any option: ");
    scanf("%d",&ch);
    
    if(ch<=4&&ch>0)
    {
      switch(ch)
     {
        case 1:
            printf("Balance=$%d\n",balance);
            break;
        case 2:
            case2:
            printf("Enter your amount to deposit: ");
            scanf("%d",&amt);
            if(amt>0)
            {
              printf("Successfully Deposit.\n");
              balance=balance+amt;
              printf("Current Balance=%d\n",balance);
            }
            else
            {
              printf("Invalid amount.\n");
              goto case2;
            }
            break;
        case 3: 
            case3:
            printf("Enter your amount to withdraw: ");
            scanf("%d",&amt);
            if(amt<=balance)
            {
              printf("Successfully withdrawn.\n");
              balance=balance-amt;
               printf("Current Balance=%d\n",balance);
            }
            else
            {
                printf("Insufficient Balance.\n");
                goto case3;
            }
            break;
        default:
            printf("Thank you for using the bank.\n");
     
     }
     if(ch==1||(ch==2)||ch==3)
     {
         printf("do you want to continue(y/n):");
         scanf(" %c",&opt);
         if(opt=='y'||opt=='Y')
         {
            goto menu;
         }
         else
         {
            printf("Thank you for using the bank.\n"); 
         }
     }

    }
     else
     {
         printf("Invalid option.\n");
         goto again;
     }
return 0;    
}