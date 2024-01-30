#include <stdio.h>

float frnhtToCelc(float frnht, float celc);
float celcToFrnht(float celc, float frnht);

int main()
{
    float celc, frnht;
    printf("Please Enter the temp in Fahrenheit :");
    scanf("%f", &frnht);
    celc = frnhtToCelc(frnht, celc);
    printf("The temp in Celcius is %f\n", celc);
    printf("Please Enter the temp in Celcius : ");
    scanf("%f",&celc);
    frnht = celcToFrnht(celc, frnht);
    printf("The temp in Fahrenheit is %f", frnht);

    return 0;
}

float frnhtToCelc(float frnht, float celc)
{
    celc = (frnht - 32) * 5 / 9;
    return celc;
}
float celcToFrnht(float celc, float frnht)
{
    frnht = (celc * 9 / 5) + 32;
    return frnht;
}