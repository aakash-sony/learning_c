#include <stdio.h>

float avgNum(float a, float b, float c, float avg);

int main()
{
    float a, b, c;
    float avg;
    printf("Please Enter The Three Numbers : ");
    scanf("%f %f %f", &a, &b, &c);
    avg = avgNum(a, b, c, avg);
    printf("%f", avg);
    return 0;
}
float avgNum(float a, float b, float c, float avg)
{
    avg = (a + b + c) / 3;
    return avg;
}