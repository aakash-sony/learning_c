#include<stdio.h>
#include<math.h>
int main() 
{
    int n1,n2,i,a,r,count=0,sum=0;
    printf("Enter the starting and ending Number: ");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        a=i;
        count=0;
        while(a!=0)
        {
            count++;
            a=a/10;
        }
        a=i;
        sum=0;
        while(a!=0)
        {
           r=a%10;
           sum=sum+pow(r,count); 
           a=a/10;  
        }
      
       
      if(i==sum)
      printf("%d ",sum);
        
    }
    return 0;    
}