#include <stdio.h>

float employeeGrosssalary(float basic, float gross);

int main()
{
    float gross, basic;
    printf("Please Enter the basis salary : ");
    scanf("%f", &basic);
    gross=employeeGrosssalary(basic, gross);
    printf("%f", gross);
    return 0;
}

float employeeGrosssalary(float basic, float gross)
{
    float hra, other;
    hra = (basic * 20) / 100;
    other = (basic * 10) / 100;
    gross = hra + basic + other;
    return gross;
}
