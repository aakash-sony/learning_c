#include<stdio.h>
int main() 
{
    int costPrice,sellingPrice,profit,loss;
    float pp,lp;
    
    printf("Please Enter the Cost Price: ");
    scanf("%d",&costPrice);
    
    printf("Please Enter the sellingPrice: ");
    scanf("%d",&sellingPrice);
    
    profit=sellingPrice-costPrice;
    loss=costPrice-sellingPrice;
    
    pp=(profit*100.0)/costPrice;
    lp=(loss*100.0)/sellingPrice;
    
    printf("Cost Price=%d\n",costPrice);
    printf("Selling Price=%d\n",sellingPrice);
    (sellingPrice>costPrice)&&printf("Profit=%d\n",profit);
    (costPrice>sellingPrice)&&printf("loss=%d\n",loss);
    (sellingPrice>costPrice)&&printf("Profit Percentage=%.2f%\n",pp);
    (costPrice>sellingPrice)&&printf("Loss Percentage=%.2f%\n",lp);
    
    return 0;
}