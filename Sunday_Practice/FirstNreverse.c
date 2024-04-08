#include<stdio.h>

void usingforLoop(int n);
void usingWhileLoop(int n);

int main()
{
     int n;
    printf("Enter the last num: ");
    scanf("%d",&n);

    usingforLoop(n);
    printf("\n");
    usingWhileLoop(n);
    return 0;
}
void usingforLoop(int n)
{
    for(int i=n;i<=n;i--)
    {
        printf("%d ",i);
        if(i==1)
        break;
    }
}
void usingWhileLoop(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d ",n);
        n--;
    }

}