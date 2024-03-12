#include<stdio.h>
int main()
{
    int costPrice=1200,repairCost=250;
    int coloringCost=350,accessoriesCost=500,desiredProfit=1500;
     int sellingPrice,totalCost;
     
     totalCost=costPrice+repairCost+coloringCost+accessoriesCost;
     
     sellingPrice=desiredProfit+totalCost;
     
     printf("Total selling Price=%d ",sellingPrice);
     
     
  
    
    return 0;
}