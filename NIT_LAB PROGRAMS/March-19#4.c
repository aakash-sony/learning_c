#include<stdio.h>
int main()
{
    int a,b,hcf,i;
    printf("Enter a and b value: ");
    scanf("%d%d",&a,&b);
    
   for(i=1;a>=i&&b>=i;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF=%d",hcf);

    return 0;
}