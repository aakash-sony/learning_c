#include <stdio.h>

int main()
{
    int hin, eng, math, cs, science;
    float average;

    printf("Enter the marks of hindi: ");
    scanf("%d", &hin);

    printf("Enter the marks of English: ");
    scanf("%d", &eng);

    printf("Enter the marks of math: ");
    scanf("%d", &math);

    printf("Enter the marks of CS: ");
    scanf("%d", &cs);

    printf("Enter the marks of science: ");
    scanf("%d", &science);

    average = (hin + eng + math + cs + science) / 5;

    printf("Average of the marks: %.2f\n", average);

    (hin < 35 || eng < 35 || math < 35 || cs < 35 || science < 35) && printf("You are Fail.\n");

    (hin >= 35 && eng >= 35 && math >= 35 && cs >= 35 && science >= 35 && average >= 91 && average <= 100) && printf("Grade A and you are pass.");
    (hin >= 35 && eng >= 35 && math >= 35 && cs >= 35 && science >= 35 && average >= 75 && average <= 90) && printf("Grade B and you are pass.");
    (hin >= 35 && eng >= 35 && math >= 35 && cs >= 35 && science >= 35 && average >= 61 && average <= 74) && printf("Grade C and you are pass.");
    (hin >= 35 && eng >= 35 && math >= 35 && cs >= 35 && science >= 35 && average <= 60) && printf("you are fail.");

    return 0;
}
