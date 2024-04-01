#include<stdio.h>

int main()
{
    int a,b,c;

    a=printf("I like ")||printf("Deepika\n"); 
    b=printf("")||printf("Jhanvi Kappor\n");
    c=printf("")&&printf("I like ")&&printf("Indians\n");
    printf("a=%d,b=%d,c=%d",a,b,c);

    //Output
    //I like Jhanvi Kapoor
    // a=1,b=1,c=0

    return 0;

}