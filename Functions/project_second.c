#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char ACCOUNT_NO[10] = "3485951633";
static const char IFSC_CODE[11] = "CBIN0282895";
static const char ACCOUNT_NAME[25] = "VIKAS SONI";
#define INITIAL_AMOUNT = 0.0;
#define ATM_PIN = 1234;

void withdrawCash();
void checkBalance();
void depositCash();
void changeAtmPin();
void passbookPrint();
int authenticateUser();

int main()
{
    int choice, rechoice;

    do
    {
        printf("Welcome, your account has been opened in our bank, start using out services for seamless experience.\n\n");
        printf("1. Withdraw Cash\n");
        printf("2. Check Balance \n");
        printf("3. Deposit Cash\n");
        printf("4. Change ATM Pin\n");
        printf("5. Passbook Print");
        printf("6. Exit\n");
        printf("*******************************************************************************************************\n\n");

        printf("Please choose a option form the above menu to continue with the services.");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            withdrawCash();
            break;
        case 2:
            checkBalance();
            break;
        case 3:
            depositCash();
            break;
        case 4:
            changeAtmPin();
            break;
        case 5:
            passbookPrint();
            break;
        case 6:
            break;
        default:
            printf("Please choose a valid option from the menu.");
        }

        printf("Do you want to use some other service? Press Y for Continue or N to End.");
        scanf("%d", &rechoice);

    } while (rechoice == 91 || rechoice == 121);

    /*system("cls");
    int ac_num, choice, amount;
    int ifsc;
    int k;
    char name[10], chance;
    printf("***********Welcome***********\n");
    printf(" Please Enter your 10 Digits Account Number :");
    scanf("%d", &ac_num);
    printf("Enter IFSC Code : ");
    scanf("%d", &ifsc);
    printf("Enter Name : ");
    scanf("%s", name);

    if (ac_num != 0000000000)
    {
        do
        {
            printf("********Welcome to the ATM Service*********\n");
            printf("1. Withdraw Cash\n");
            printf("2. Check Balance \n");
            printf("3. Deposit Cash\n");
            printf("4. Change ATM Pin\n");
            printf("5. Passbook Print");
            printf("********************************************\n");

            printf("Please Enter your Choice : ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                withdrawCash();
                break;
            case 2:
                checkBalance();
                break;
            case 3:
                depositCash();
                break;
            case 4:
                changeAtmPin();
                break;
            case 5:
                passbookPrint();
                break;
            default:
                printf("Oops! Invalid Option Selected\n");
            }

            printf("Do you want to take one more chance? (Y/N) : ");
            scanf(" %c", &chance);
            if (chance == 'n' || chance == 'N')
                k = 1;

        } while (!k);
        printf("****Thanks for using ATM Service****");
    }
    else
        printf("You have entered Wrong Details");
        */
}
void withdrawCash()
{

    int withdraw;
    int amount = 20000;
    int pin;

    int isUserAuthenticated = authenticateUser();
    if (isUserAuthenticated == 1)
    {
        printf("Please Enter your 4 digits Pin\n");
        scanf("%d", &pin);
        if (pin != 0000)
        {
            printf("Please Enter the amount to Withdraw :");
            scanf("%d", &withdraw);
            if (withdraw % 100 == 0 && withdraw < amount)
            {
                printf("Please Collect Your Cash\n");
                amount = amount - withdraw;
                printf("Your Current balance is %d : \n", amount);
            }
            else if (withdraw % 100 == 0)
            {
                printf("Please Enter the Amount in Multiples of 100\n");
            }
            else
                (withdraw > amount);
            printf("Insufficient Balance");
        }
    }
    else
    {
        printf("User authentication failed, please enter correct user details.\n\n");
    }
}
void checkBalance()
{
    int amount = 20000;
    printf("Your Total Balance is %d\n", amount);
}
void depositCash()
{
    int diposit, amount = 20000;
    printf("Please Enter the Amount to Diposit :\n");
    scanf("%d", &diposit);
    amount = amount + diposit;
    printf("Your Current Balance is %d \n", amount);
}
void changeAtmPin()
{
    int mobile_num, otp, newpin, confirmpin;
    printf("Please Enter your 10 digits Mobile number : ");
    scanf("%d", &mobile_num);
    printf("Enter 6 digit OTP");
    scanf("%d", &otp);
    if (otp != 000000)
    {
        printf("Enter 4 Digits New Pin ");
        scanf("%d", &newpin);
        printf("Re-Enter Pin for Confirmation ");
        scanf("%d", &confirmpin);
        printf("Your ATM PIN has been sucessfully changed\n");
    }
}
void passbookPrint()
{
    int amount = 20000;
    printf("**************************************************\n");
    printf("Name************\n");
    printf("IFSC************\n");
    printf("Account Number*****************\n");
    printf("Total Balance is %d \n", amount);
}

int authenticateUser()
{
    char accountNumber[10];
    char ifscCode[11];
    char accountName[25];
    printf("Please enter your account details: \n");
    printf("Account Number: \t");
    fflush(stdin);
    gets(accountNumber);
    printf("IFSC Code: \t");
    scanf("%s", ifscCode);
    printf("Account Name: \t");            
    fflush(stdin);
    gets(accountName);
    

    if (strcmp(accountName, ACCOUNT_NAME) == 0 && strcmp("3485951633", ACCOUNT_NO) == 0 && strcmp(ifscCode, IFSC_CODE) == 0)
    {
        return 1;
    }
    else
    
    {
        return 0;
    }
}