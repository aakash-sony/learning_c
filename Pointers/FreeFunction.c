#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p, *q;
    p = (int *)malloc(10);
    printf("p= %u\n", p);
    free(p);
     q = (int *)malloc(10);
    printf("q= %u\n", q);
    return 0;
}
