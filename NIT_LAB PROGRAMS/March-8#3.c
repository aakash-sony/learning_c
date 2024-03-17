#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
   
   
          switch(a>b)
          {
              case 1:
                 printf("A is bigger.");
                 break;
              case 0:
                switch(a<b)
                {
                    case 1:printf("B is Bigger");break;
                    case 0:printf("Equal");
                    
                }
          }
    
    return 0;
}