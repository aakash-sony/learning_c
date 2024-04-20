
#include <stdio.h>
int main()
{
    int nc, nr, arr[10][10], i, j, rSum = 0, cSum = 0;
again:
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &nr, &nc);
    if (nr == nc)
    {
        // Taking input from user
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                printf("Element-[%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        // Printing Matrix
        printf("The Matrix is: \n");
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                printf("%4d", arr[i][j]);
            }
            printf("\n");
        }
        // Operation for storing the sum of rows and columns
        for (i = 0; i < nr; i++)
        {
            rSum = 0, cSum = 0;
            for (j = 0; j < nc; j++)
            {
                rSum += arr[i][j];
                cSum += arr[j][i];
            }
            arr[i][j] = rSum;
            arr[j][i] = cSum;
        }
        // Printing the Matrix with Sum
        printf("The Updated matrix is: \n");
        for (i = 0; i <= nr; i++)
        {
            for (j = 0; j <= nc; j++)
            {
                if (i == nr && j == nc)
                    continue;
                else
                    printf("%4d", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Number of rows and number of columns should be same.\n\n");
        goto again;
    }
    return 0;
}