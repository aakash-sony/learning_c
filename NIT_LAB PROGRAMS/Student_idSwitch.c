#include<stdio.h>

int main()
{
   int user_id=1001,pass=1010;
   int id,pword;
   char name[15];
   printf("Enter your Name:");
   scanf("%s",name);
   printf("Enter your id: ");
   scanf("%d",&id);
   switch(id==user_id)
   {
       case 1:
              printf("Enter your Password:");
              scanf("%d",&pword);
              
              switch(pword==pass)
              {
                  case 1:
                     printf("Name=%s\n",name);break;
                  default: 
                     printf("Invalid Password.\n");
                     
              }break;
       default:
            printf("Incorrect user id.\n");
   }
   return 0;
}