#include<stdio.h>

int checkingVotingEligibility(int age);


int main()
{
   int age;
   printf("Please enter the Age: ");
   scanf("%d",&age);

   checkingVotingEligibility(age);

  return 0;

}

int checkingVotingEligibility(int age)
{
   
    if(age>=18)
    {
        printf("You are eligible.\n");

        return 0;

    }
    printf("You are not eligible.");

}
