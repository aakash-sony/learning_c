#include <stdio.h>

void eligibleForVoting(int age);

int main()
{
    int age;
    printf("Please Enter the Age in years for Voting : ");
    scanf("%d", &age);
    eligibleForVoting(age);

    return 0;
}
void eligibleForVoting(int age)
{
    if (age >= 18)
        printf("You are eligible for voting");
    else
        printf("You are not eligible for Voting");
}