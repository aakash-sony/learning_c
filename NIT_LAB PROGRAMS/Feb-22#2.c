#include <stdio.h>

int main()
{
    char a = 65, b = 55, c = a + b;

    printf("c=%d\n", c); 
    
    c = 260;
    printf("c=%d\n", c); 

    c = 270;
    printf("c=%u\n", c); 

    b = 66;
    c = a + b;
    printf("c=%d\n", c); 

    c = 'a' + 'A' + 'z' + 'Z';
    printf("c=%c", c); 

    return 0;
}
