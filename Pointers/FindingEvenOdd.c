#include <stdio.h>

int main()
{
    int n;
    int *p;
    p = &n;
    printf("Enter a number: ");
    scanf("%d", &n);

    puts(*p % 2? "odd" : "even");
    return 0;
}