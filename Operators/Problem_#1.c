#include <stdio.h>

int main()
{
    printf("%d\n", 5 + 3 / 2 == 4); //0
    printf("%d\n", 5 - 3 / 2 == 4);  //1
    printf("%d\n", 5 / 2 * 2 == 4);  //1
    printf("%d\n", 2 + 3 * 4 + 5 == 19);  //1
    printf("%d\n", 2 + 3 * 4 + 5 == 45);  //0
    printf("%d\n", 2 + 3 * 4 + 5 == 25);  //0
}