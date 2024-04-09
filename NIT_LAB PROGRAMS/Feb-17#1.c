<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int a, b;
    char c;

    printf("Please enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Please select any Arithmetic operator(+,-,*,/): ");
    scanf(" %c", &c);

    (c == '+') && printf("%d", a + b);
    (c == '-') && printf("%d", a - b);

    (c == '*') && printf("%d", a * b);
    (c == '/') && printf("%d", a / b);

    return 0;

=======
<<<<<<< HEAD
=======

>>>>>>> acae7bb7667a83f5979d38f583a727b9ab9a8cef
#include<stdio.h>

int main()

{
    int a,b;
    char c;
    printf("Please enter two number: ");
    scanf("%d %d",&a,&b);

    printf("Please select any arithmatic symbol(+,-,*,/): ");
    scanf(" %c",&c);

    (c=='+')&&printf("%d",a+b);
    (c=='-')&&printf("%d",a-b);
    (c=='*')&&printf("%d",a*b);
    (c=='/')&&printf("%d",a/b);

    return 0;
<<<<<<< HEAD
    
    
=======
>>>>>>> acae7bb7667a83f5979d38f583a727b9ab9a8cef
>>>>>>> e234f23f0fbcf8ca0e4c816ed4a3dcfc34f065c2
}