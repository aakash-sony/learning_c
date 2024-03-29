#include<stdio.h>

//Multiples Of 10...

int main()
{ 
    int n,n1,n2,n3;
    printf("Please enter a number: ");
    scanf("%d",&n);

    n1=n%10;
    n2=n/10;
    n3=(n2+n1/5)*10;
    printf("%d",n3);


    return 0;

}