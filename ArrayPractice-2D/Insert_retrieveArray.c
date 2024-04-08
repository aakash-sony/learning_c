#include <stdio.h>
int main()
{
    int i, j, nr, cr, arr[5][5];
    printf("Enter the number of row: ");
    scanf("%d", &nr);
    printf("Enter the number of column: ");
    scanf("%d", &cr);
    printf("\n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < cr; j++)
        {
            printf("Enter the [%d][%d] Element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n2D Array is: \n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < cr; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}