#include<stdio.h>
int main()
{
    char choice;
    int quantity;
    float price,cost;
    printf("*******Welcome to My Bakery Shop!*******\n");
    
    printf("*****************************************\n");
    printf("Available Item is:\n");
    printf("A. Chocolate.\n");
    printf("B. Rusk.\n");
    printf("C. Biscuits\n");
    printf("Please select any option(A,B or C): ");
    scanf("%c",&choice);

    (choice=='A')&&printf("You selected Chocolate.\n");
    (choice=='B')&&printf("You selected Rusk.\n");
    (choice=='C')&&printf("You selected Biscuits.\n");

    printf("Please enter the quantity which you want to purchase: \n");
    scanf("%d",&quantity);
    
    printf("Enter the price of Chocolate Cake: ");
    scanf("%f",&price);
    
    cost=quantity*price;
    
    printf("-----Invoice-----\n");
    
    printf("Quantity=%d\n",quantity);
    printf("Price Per Item=%.2f\n",price);
    printf("Total Cost=%.2f\n",cost);
    
    
    
    return 0;
}