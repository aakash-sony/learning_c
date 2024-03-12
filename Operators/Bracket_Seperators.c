#include<stdio.h>

void program1();
void program2();
void program3();


int main()
{
    program1();
    program2();
    program3();

    return 0;
}

void program1()
{
  int a=(10,20,30);
    printf("a=%d\n",a); //30
}

void program2()
{
  int a;
  a=10,20,30;
  printf("a=%d\n",a);  //10
}

void program3()
{
    int a;
    a=((10,20),30),40,(50,60);
    printf("a=%d\n",a);  //30
}