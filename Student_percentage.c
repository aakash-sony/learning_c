#include <stdio.h>

int studentPercentage(int science, int math, int english);

int main()
{
    int science, math, english;
    float percentage ;

    printf("Please Enter the marks of Subject : \n");
    printf("Science : ");
    scanf("%d", &science);
    printf("Math : ");
    scanf("%d", &math);
    printf("English : ");
    scanf("%d", &english);
    percentage = studentPercentage(science, math, english);
    printf("You have found total %.2f Percentage\n",percentage);

    if (percentage >= 60)
        printf("First Division");
    else if (percentage >= 50 && percentage < 60)
        printf("Second Division");
    else if (percentage >= 34 && percentage < 50)
        printf("Third Division");
    else
        printf("Fail");

    return 0;
}
int studentPercentage(int science, int math, int english)
{
    float t= (float)(science+math+english);
    return ((t/300)*100);
}
    
