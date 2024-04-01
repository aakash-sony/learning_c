#include <stdio.h>

int main()
{
  char ch;
  int home_Allowance=10000,salary,
  food_Allowance=3000,travel_Allowance=10000;
  
  float tax,exact_Salary,total_Salary;
  
  printf("Enter the Salary: ");
  scanf("%d",&salary);
  
  printf("Enter the Designation(d for Developer or t for Trainer or m for Manager:");
  scanf(" %c",&ch);
  
  if(ch=='d'||ch=='D')
  {
      total_Salary=salary+home_Allowance;
      
      if(total_Salary>40000)
      {
          tax=total_Salary*0.1;
          
          exact_Salary=total_Salary-tax;
          
          printf("Exact Salary=%.2f\n",exact_Salary);
      }
      else
      {
          tax=total_Salary*0.05;
          
          exact_Salary=total_Salary-tax;
          
          printf("Exact Salary=%.2f\n",exact_Salary);
      }
      
    }
    if(ch=='t'||ch=='T')
  {
      total_Salary=salary+home_Allowance+food_Allowance;
      
      if(total_Salary>40000)
      {
          tax=total_Salary*0.1;
          
          exact_Salary=total_Salary-tax;
          
          printf("Exact Salary=%.2f\n",exact_Salary);
          
      }
      else
      {
          tax=total_Salary*0.05;
          
          exact_Salary=total_Salary-tax;
          
          printf("Exact Salary=%.2f\n",exact_Salary);
      }
      
    }
     if(ch=='m'||ch=='M')
  {
      total_Salary=salary+home_Allowance+food_Allowance+travel_Allowance;
      
      if(total_Salary>40000)
      {
          tax=total_Salary*0.1;
          
          exact_Salary=total_Salary-tax;
          
          printf("Exact Salary=%.2f\n",exact_Salary);
          
      }
      else
      {
          tax=total_Salary*0.05;
          
          exact_Salary=total_Salary-tax;
          
          printf("Exact Salary=%.2f\n",exact_Salary);
      }
      
  }
  
  

    return 0;
}