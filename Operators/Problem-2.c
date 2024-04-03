#include <stdio.h>

int main()
{
    int a;
    printf("%d\n", 2 >= 2, 5 <= 4);  //1
    printf("%d\n", 2 >= 2 && 5 <= 4); // 0
    printf("%d\n", 2 >= 2 || 5 <= 4);  //1
    printf("%d\n", !(2 <= 2));       //0
    printf("%d\n", 2 >= 2 && 3 == 3 && 4 != 4); //0

    return 0;
}