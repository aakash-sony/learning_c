#include <stdio.h>

int main()
{
    float consumed_unit,unit_charge,totalBill,surcharge;
    
    printf("Enter the consumed Unit: ");
    scanf("%f",&consumed_unit);
    
    if(consumed_unit<=50)
    {
        unit_charge=consumed_unit*0.50;
        surcharge=unit_charge*20/100;
        
        totalBill=unit_charge+surcharge;
        
        printf("Total Electricity Bill=%.2f",totalBill);
    }
    else if(consumed_unit>50&&consumed_unit<=150)
    {
        unit_charge=50*0.50+(consumed_unit-50)*0.75;
        surcharge=unit_charge*20/100;
        
        totalBill=unit_charge+surcharge;
        
        printf("The Electricity Bill= %.2f\n",totalBill);
    }
    else if(consumed_unit>150&&consumed_unit<=250)
    {
        unit_charge=50*0.50+100*0.75+(consumed_unit-150)*1.20;
       surcharge=unit_charge*20/100;
       
        totalBill=unit_charge+surcharge;
        
        printf("The Electricity Bill= %.2f\n",totalBill);
       
    }
    else
    {
        unit_charge=50*0.50+100*0.75+100*1.20+(consumed_unit-250)*1.50;
           surcharge=unit_charge*20/100;
       
        totalBill=unit_charge+surcharge;
        
        printf("The Electricity Bill= %.2f\n",totalBill);
        
    }
    return 0;
}