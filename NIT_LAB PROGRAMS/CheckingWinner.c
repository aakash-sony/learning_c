#include<stdio.h>
int main()
{
   char name1[15],name2[15];
   int score1,score2;
   
   printf("Enter Ist Name: ");
   scanf("%s",name1);
   printf("Enter Ist score points: ");
   scanf("%d",&score1);
   printf("Enter 2nd Name: ");
   scanf("%s",name2);
   printf("Enter 2nd score points: ");
   scanf("%d",&score2);
   
   switch(score1>score2)
   {
       case 1:printf("%s is winner by %d score points",name1,score1-score2);break;
       case 0:
              switch(score1<score2)
              {
                case 1:printf("%s is winner by %d score points",name2,score2-score1);break;
                case 0:printf("Both scores are equal.");
              }
   }
   
   
    
    return 0;
}