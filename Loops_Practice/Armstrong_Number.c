#include<stdio.h>
#include<math.h>

int  main()
{
    int n,m,count=0,i,sum=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n;
    do
    {
        count++;      
        m=m/10;        
    }while(m!=0);      
    m=n;             
    while(m!=0)
    {
         r=m%10;              
         sum=sum+pow(r,count);    
         m=m/10;                 
    }
   puts(n==sum?"Armstrong":"Not A Armstrong");

    return 0;
  
}