#include <stdio.h>

void countEvenOddElements(int arr[], int size);
void sortingArrayElements(int arr[], int size);
void checkPalindromeArray(int arr[],int size);
void printArrayElement(int arr[],int size);

int main()
{
    int arr[50];
    int size;
    printf("Enetr Array Size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enetr the %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printArrayElement(arr,size);


    countEvenOddElements(arr, size);

    //sortingArrayElements(arr, size);

    checkPalindromeArray(arr,size);

    return 0;
}

void printArrayElement(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\n%d ",arr[i]);
    }
}

void countEvenOddElements(int arr[], int size)
{
    int i, countEven = 0, countOdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            countEven++;
        else
            countOdd++;
    }
    if (countEven == 0)
        printf("No even Elements are available\n");
    else
        printf("Total Even Elements are: %d \n", countEven);
    if (countOdd == 0)
        printf("No Odd Elements are available\n");
    else
        printf("Total Odd Elements are: %d \n", countOdd);
}

void sortingArrayElements(int arr[], int size)
{
    int i, smallElement;
    smallElement = arr[0];
    for (i = 0; i < size; i++)
    {
        if (smallElement > arr[i])
        {
            smallElement = arr[i];
            printf("%d", arr[i]);
        }
    }
}
void checkPalindromeArray(int arr[],int size)
{
    int i;
 for(i=size-1;i>=0;i--)
 {
    printf("%d ",arr[i]);
 } 
   

}

/*
array palindrome => group of indexed elements
int arr[] = {22, 44, 66, 77, 88, 88, 77, 66, 44, 22}; // 0 == (n-1), 1 == (n-2), 2 == (n-3)

int start=0; end=0;
int count=0;

for(int i =0; i< size; i++){

    if(arr[start] != arr[end]){
        break;
    }else{
        count++;
    }
    start++;
    end--;
}



if((count*2)==size || (count*2) == (size-1)){
    printf("palindrome");
}else{
    Not palindroem
}

*/
