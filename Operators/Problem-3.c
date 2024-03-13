#include <stdio.h>

int main()
{
    printf("%d\n", 2 >= 2 || 5 == 5 && 7 != 7);  //1
    printf("%d\n", (2 >= 2 || 5 == 5) && 7 != 7); //0
    printf("%d\n", 9 > 7 > 1);   //0
    printf("%d\n", 9 > 7 > 0);   //1
    printf("%d\n", 9 && -9);    //1
}