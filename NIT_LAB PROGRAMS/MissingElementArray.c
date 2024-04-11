#include <stdio.h>
int main()
{
    int i, j, arr[] = {1, 4, 7, 12, 17}, temp1, temp2;
    printf("The Missing number of Given Array is: \n");
    for (i = 0; i < 5; i++)
    {
        temp1 = arr[i];
        temp2 = arr[i + 1];
        for (j = temp1 + 1; j < temp2; j++)
        {
            printf("%d ", j);
        }
    }

    return 0;
}