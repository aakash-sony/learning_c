#include <stdio.h>
int main()
{
    int i, j, nr1, nc1, nr2, nc2, arr1[5][5], arr2[5][5];

    printf("Enter the number of row for Ist matrix: ");
    scanf("%d", &nr1);
    printf("Enter the number of column for Ist matrix: ");
    scanf("%d", &nc1);
    printf("\n");
    printf("Enter the number of row for 2nd matrix: ");
    scanf("%d", &nr2);
    printf("Enter the number of column for 2nd matrix: ");
    scanf("%d", &nc2);
    if (nr1 == nr2 && nc1 == nc2)
    {
        for (i = 0; i < nr1; i++)
        {
            for (j = 0; j < nc1; j++)
            {
                printf("Enter the [%d][%d] Element for Ist matrix: ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("\n");
        for (i = 0; i < nr2; i++)
        {
            for (j = 0; j < nc2; j++)
            {
                printf("Enter the [%d][%d] Element for 2nd matrix: ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        printf("\nIst 2D matrix is: \n");
        for (i = 0; i < nr1; i++)
        {
            for (j = 0; j < nc1; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
        printf("\n2nd 2D matrix is: \n");
        for (i = 0; i < nr2; i++)
        {
            for (j = 0; j < nc2; j++)
            {
                printf("%d ", arr2[i][j]);
            }
            printf("\n");
        }
        printf("\nSum of two matrix is: \n");
        for (i = 0; i < nr2; i++)
        {
            for (j = 0; j < nc2; j++)
            {
                printf("%d ", arr1[i][j] + arr2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThe Size of both matrix should be same.");
    }

    return 0;
}