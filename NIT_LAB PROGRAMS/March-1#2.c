#include <stdio.h>

int main() 
{
    int rupees;
    
    printf("Enter the Money: ");
    scanf("%d",&rupees);
    
    if(rupees>=500)
    {
        printf("RS 500 Notes=%d\n",rupees/500);
        
        rupees=rupees%500;
        
    }

    if(rupees>=200)
    {
        printf("RS 200 Notes=%d\n",rupees/200);
        
        rupees=rupees%200;
    }
    if(rupees>=100)
    {
        printf("RS 100 Notes=%d\n",rupees/100);
        
        rupees=rupees%100;
    }
    if(rupees>=50)
    {
        printf("RS 50 Notes=%d\n",rupees/50);
        
        rupees=rupees%50;
    }
    if(rupees>=20)
    {
        printf("RS 20 Notes=%d\n",rupees/20);
        
        rupees=rupees%20;
    }
    if(rupees>=10)
    {
        printf("RS 10 coins=%d\n",rupees/10);
        
        rupees=rupees%10;
    }
    if(rupees>=5)
    {
        printf("RS 5 coins=%d\n",rupees/5);
        
        rupees=rupees%5;
    }
    if(rupees>=2)
    {
        printf("RS 2 coins=%d\n",rupees/2);
        
        rupees=rupees%2;
        
    }
    if(rupees>=1)
    {
        printf("RS 1 coins=%d\n",rupees);
    }


return 0;
}