#include<stdio.h>

int main()
{
    int rupees;

    printf("Enter the ruppes: ");
    scanf("%d",&rupees);
    
    if(rupees>=500)
    {
        printf("500 Notes=%d\n",rupees/500);
        rupees=rupees-500*(rupees/500);

    }
    if(rupees>=200)
    {
        printf("200 Notes=%d\n",rupees/200);
        rupees=rupees-200*(rupees/200);
    }
    if(rupees>=100)
    {
        printf("100 Notes=%d\n",rupees/100);
        rupees=rupees-100*(rupees/100);
    }
    if(rupees>=50)
    {
        printf("50 Notes=%d\n",rupees/50);
        rupees=rupees-50*(rupees/50);
    }
    if(rupees>=20)
    {
        printf("20 Notes=%d\n",rupees/20);
        rupees=rupees-20*(rupees/20);
    }
    if(rupees>=10)
    {
        printf("10 notes=%d\n",rupees/10);
        rupees=rupees-10*(rupees/10);
    }
    if(rupees>=5)
    {
        printf("5 Notes=%d\n",rupees/5);
        rupees=rupees-5*(rupees/5);
    }
    if(rupees>=2)
    {
        printf("2 Notes=%d\n",rupees/2);
        rupees=rupees-2*(rupees/2);
    }
    if(rupees>=1)
    {
        printf("1 Notes=%d",rupees);
    }

    return 0;

}
