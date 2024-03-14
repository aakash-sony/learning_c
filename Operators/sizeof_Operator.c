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
    float a=1.1;
    printf("%d, %d\n",sizeof(a),sizeof(1.1));  // 4,8
    printf("%d,%d\n",sizeof((1.1f)),sizeof((float)1.1));  //4,4
}

void program2()
{
    printf("%d,%d,%d\n",sizeof(32768),sizeof(50000),sizeof(100000));  //4,4,4
    printf("%d,%d,%d\n",sizeof(32768u),sizeof(50000u),sizeof(100000u)); //4,4,4
    printf("%d,%d\n",sizeof((unsigned)50000),sizeof((unsigned)100000)); //4,4
    printf("%d,%d\n",sizeof((int)50000),sizeof((int)100000));  //4,4
}

void program3()
{
    int a=0;
    a=!(a++,a++);
    printf("a=%d",a); //a=2

}