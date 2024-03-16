#include <stdio.h>

int main()
{
    int a, b;
    char c;

    printf("Please enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Please select any Arithmetic operator(+,-,*,/): ");
    scanf(" %c", &c);

    (c == '+') && printf("%d", a + b);
    (c == '-') && printf("%d", a - b);

    (c == '*') && printf("%d", a * b);
    (c == '/') && printf("%d", a / b);
  return 0;
}