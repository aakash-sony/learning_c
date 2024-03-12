#include<stdio.h>
int main()
{
   int id;
   printf("Enter the id: ");
   scanf("%d",&id);
   
   switch(id)
   {
       case 11:case 12:case 13:case 14:case 15:
       printf("Software Department");break;
       case 16:case 17:case 18:case 19:case 20:
       printf("Developer Department");break;
       case 21:case 22:case 23:
       printf("Management Department");break;
       default:printf("Invalid");
       
   }
   return 0;
}