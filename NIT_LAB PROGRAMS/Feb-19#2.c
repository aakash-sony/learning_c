#include<stdio.h>
int main()
{
    int pa=4130;
    int rate=5;
    int time=3;
    float si;
    
    si= pa*rate*time/100.0;
    
    printf("Simple Interest is %.2f",si);
    
    
return 0;
}