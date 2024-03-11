#include <stdio.h>

void inputMatrix(int arr[][10], int row, int column);
void printMatrix(int arr[][10], int row, int column);

int main()
{
    int row1, column1;
    int row2, column2;
    int arr1[10][10], arr2[10][10];
    printf("Please enter the row and column of Ist matrix: \n");
    scanf("%d%d", &row1, &column1);

    inputMatrix(arr1, row1, column1);
    printMatrix(arr1, row1, column1);

    printf("Please enter the row and column of 2nd matrix: \n");
    scanf("%d%d", &row2, &column2);

    inputMatrix(arr2, row2, column2);
    printMatrix(arr2, row2, column2);
    

    return 0;
}

void inputMatrix(int arr[][10], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the [%d][%d] Element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printMatrix(int arr[][10], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


