#include <stdio.h>
int main()
{
    int n;
    int *p;
    p = &n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (*p>0)
    {
        puts("Positive");
    }
    else
    {
        if(*p<0)
        {
            puts("Negative");
        }
        else
        {
            puts("Zero");
        }
    }
     return 0;
}