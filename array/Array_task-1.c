#include <stdio.h>
void insertElementsInArray(int arr[], int size); 
void printElementsOArray(int arr[], int size);
int addArrayElements(int arr[], int size);
void printAverageOfElements(int arr[], int size);
void multiplyArrayElements(int arr[], int size);
void largestNoOfArray(int arr[], int size);
void smallestNoOfArray(int arr[], int size);

int main()
{
    int i, size;
    int arr[10];
    int sum;
    printf("how many elements do you want to enter in the array? : ");
    scanf("%d", &size);
    insertElementsInArray(arr, size);
    printElementsOArray(arr, size);
    sum = addArrayElements(arr, size);
    printf("\nThe Sum of elements are %d \n", sum);
    printAverageOfElements(arr, size);
    multiplyArrayElements(arr, size);
    largestNoOfArray(arr, size);
    smallestNoOfArray(arr, size);

    return 0;
}

void insertElementsInArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d Element : ", (i + 1));
        scanf("%d", &arr[i]);
    }
}
void printElementsOArray(int arr[], int size)
{

    printf("\n\nEntered Elements are : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
}

int addArrayElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

void printAverageOfElements(int arr[], int size)
{
    float t = (float)(addArrayElements(arr, size));
    printf("Average is : %.2f\n", t / size);
}
void multiplyArrayElements(int arr[], int size)
{
    int multiply = 1;
    for (int i = 0; i < size; i++)
    {
        multiply = multiply * arr[i];
    }
    printf("The multiplication of Elements are %d\n", multiply);
}
void largestNoOfArray(int arr[], int size)
{

    int largestNum = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (largestNum < arr[i])
        {
            largestNum = arr[i];
        }
    }
    printf("The largest Elements of Array is %d : ", largestNum);
}
void smallestNoOfArray(int arr[], int size)
{

    int smallestNum = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (smallestNum > arr[i])
        {
            smallestNum = arr[i];
        }
    }
    printf("The Smallest Number of Array is %d :", smallestNum);
}