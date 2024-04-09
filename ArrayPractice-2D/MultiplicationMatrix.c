#include <stdio.h>
int main()
{
    int i, j, nr, nc, arr1[5][5], arr2[5][5], k, sum = 0;

    printf("Enter the number of rows and column: ");
    scanf("%d%d", &nr, &nc);

    printf("\n");
    if (nr == nc)
    {
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                printf("Enter the [%d][%d] Element for Ist matrix: ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("\n");
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                printf("Enter the [%d][%d] Element for 2nd matrix: ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        printf("\nIst 2D matrix is: \n");
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
        printf("\n2nd 2D matrix is: \n");
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                printf("%d ", arr2[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("The Multiplication of both matrix is :\n");
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                sum = 0;
                for (k = 0; k < nr; k++)
                {
                    sum = sum + arr1[i][k] * arr2[k][j];
                }
                printf("%3d", sum);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The size of both matrix should be same.");
    }
    return 0;
}