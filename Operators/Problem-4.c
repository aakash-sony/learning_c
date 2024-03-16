#include <stdio.h>

int main()
{
    printf("%d\n", 0 || 'a');  //1
    printf("%d\n", '0' && 'a');  //0
    printf("%d\n", 0 || 'a' / 'b');  //1
    printf("%d\n", !(!5 > !-5 && !0 || !6));  //0

    return 0;
}