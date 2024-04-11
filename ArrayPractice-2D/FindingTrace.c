#include <stdio.h>
int main()
{
    int nr, nc, r, c, arr[10][10],sum=0;
    printf("Enter number of rows and column: ");
    scanf("%d%d", &nr, &nc);
    if (nr == nc)
    {
        for (r = 0; r < nr; r++)
        {
            for (c = 0; c < nc; c++)
            {
                printf("Enter [%d][%d] element: ", r, c);
                scanf("%d", &arr[r][c]);
            }
        }
        for (r = 0; r < nr; r++)
        {
            for (c = 0; c < nc; c++)
            {
                printf("%d\t", arr[c][r]);
                if(r==c)
                {
                    sum=sum+arr[r][c];
                }
            }
            printf("\n");
        }
        printf("Trace=%d",sum);
    }
    else
    {
        printf("Number of rows and column should be same.");
    }
    return 0;
}