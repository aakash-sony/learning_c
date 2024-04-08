#include <stdio.h>
int main()
{
    int nr, nc, r, c, sum = 0, arr[10][10];
    printf("Enter number of rows and column: ");
    scanf("%d%d", &nr, &nc);
    if (nr == nc)
    {
        for (r= 0; r< nr; r++)
        {
            for (c= 0; c < nc; c++)
            {
                printf("Enter the [%d][%d] element: ", r, c);
                scanf("%d", &arr[r][c]);
            }
        }
        printf("\n2D Array is: \n");
        for (r = 0; r < nr; r++)
        {
            for (c = 0; c < nc; c++)
            {
                printf("%d ", arr[r][c]);
                if(r+c==nr-1)
                {
                    sum=sum+arr[r][c];
                }
            }
            printf("\n");
        }
        printf("Sum of Right Diogonal elements: %d",sum);
    }
    else
    {
        printf("Number of rows and column should be same.");
    }
    return 0;
}