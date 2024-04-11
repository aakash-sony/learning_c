#include <stdio.h>

int main()
{
    int i, j, n1, n2,c;
    printf("Enter the starting number: ");
    scanf("%d", &n1);
    printf("Enter the ending number: ");
    scanf("%d", &n2);

    for (i = n1; i <= n2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
               {  
                   break;
               }
        }
        if (i == j)
        {
              c++;
            printf("%d ", i);
        }
        
    }
    printf(" \n Total %d number.",c);
    return 0;
}