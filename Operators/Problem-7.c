#include<stdio.h>

int operatorProblem1();
int operatorProblem2();
int operatorProblem3();

int main()
{
     operatorProblem1();

     operatorProblem2();

     operatorProblem3();
     return 0;
}

int operatorProblem1()
{
  int a=20;
  printf("a=%d\n",a++/2); // Priority==>/,printf,++====>10.  (actual a value =21)
  printf("a=%d\n",++a/2);  //priority==>++,/,printf=====>11. (11 is not stored in variable,actual a value is 22).
  printf("a=%d\n",a); // 22.
  return 0;
}

int operatorProblem2()
{
    int a=20;
    printf("a=%d\n",a++); //20
    printf("a=%d\n",++a);  //22
    return 0;
}

int operatorProblem3()
{
    int a=2,b=9;
    a=a++ + ++b;   //a=13
    b=++a + b++;   //a=14, b=25

    printf("a=%d, b=%d\n",a,b);

    return 0;
}