#include <stdio.h>

int main()
{
    int n, c;
    printf("Enter a no.: ");
    scanf("%d", &n);
    c = printf("%d", n);
    printf("\n");
    printf("no of digit = %d", c);
}