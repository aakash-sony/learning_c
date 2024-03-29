#include <stdio.h>

void program1();
void program2();

int main()
{
    program1();
    program2();

    return 0;
}

void program1()
{
    printf("%d\n", 25 & 15); // 9
    printf("%d\n", 25 | 15); // 31
    printf("%d\n", 25 ^ 15); // 22
}

void program2()
{
    printf("%d\n", 22 & 9);   //0
    printf("%d\n", 32 | 12);  //44
    printf("%d\n", 45 ^ 21);  //56
}