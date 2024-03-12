#include <stdio.h>
void showMenu();
int askUserChoiceAccToMenu();
int checkInputValidation();
int askForQty();
int calculatePriceAsPerTheQuantity();
int returnSurplusAmount(int ttlBill, int amount);
void printTheBill();
int payAmount();
int askIfTheyWantToContinueTherService();

void main()
{
    int ch, calculatedBill, amountReceived,continueService;

    showMenu();
    ch = askUserChoiceAccToMenu();
    checkInputValidation(ch);
    calculatedBill = calculatePriceAsPerTheQuantity(ch);
    printTheBill(calculatedBill);
    amountReceived = payAmount();
    returnSurplusAmount(calculatedBill, amountReceived);
     continueService= askIfTheyWantToContinueTherService();

}
void showMenu()
{
    printf("**********Our Menu***********\n");
    printf("Tea-----------Rs.10\n");
    printf("Coffee--------Rs.20\n");
    printf("Cold coffee----Rs.50\n");
    printf("Exit\n");
}

int askUserChoiceAccToMenu()
{
    int ch;
    printf("Please enter a number(1-4) for select one.");
    scanf("%d", &ch);
    return ch;
}

int calculatePriceAsPerTheQuantity(int ch)
{
    int pricePerPack = 0;
    if (ch == 1)
    {
        pricePerPack = 10;
    }
    else if (ch == 2)
    {
        pricePerPack = 20;
    }
    else
    {
        pricePerPack = 50;
    }
    int qut = askForQty(ch);
    return pricePerPack * qut;
}
int askForQty(int ch)
{
    char itemName[20];
    int qty;
    if (ch == 1)
    {
        printf("How many cups of Tea do you want: ");
        //itemName[10] = "Tea";
    }
    else if (ch == 2)
    {
        printf("How many cups of coffee do you want: ");
        //itemName[6] = "Coffee";
    }
    else
    {
        printf("How many cups of cold coffee do you want: ");
        //itemName[11] = "Cold Coffee";
    }
    scanf("%d", &qty);
    return qty;
}
int returnSurplusAmount(int ttlBill, int amountReceived)
{
    if (ttlBill == amountReceived)
    {
        return 0;
    }
    else if (ttlBill > amountReceived)
    {
        return ttlBill - amountReceived;
    }
    else
    {
        return amountReceived - ttlBill;
    }
}

int askIfTheyWantToContinueTherService()
{
    char a;
    printf("Do you want to continue(Y/N): ");
    scanf("%c", &a);
    if (a == 'y' || a == 'Y')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int payAmount()
{
    int amount;
    printf("Pay the Amount: ");
    scanf("%d", &amount);
    return amount;
}

void printTheBill(int calculatedBill)
{

    printf("Total Bill=%d", calculatedBill);
}

int checkInputValidation(int choice)
{
    if(choice>4)
    {
        printf("Invalid Selection.");
    } else{
        askForQty(choice);
    }
}
