#include <stdio.h>

int main()
{
    double celcius, fahrenheit;
    printf("Enter the temp in celcius :");
    scanf("%ld", &celcius);
    fahrenheit = (celcius * 9 / 5) + 32;

    printf("the fahrenheit value is : %ld", fahrenheit);
    return 0;
}
