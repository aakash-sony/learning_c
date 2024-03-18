#include <stdio.h>

int main() 
{
   int wheels,age,ch,ttl_tyre_cost,tyre_cost=400,
   fuel_cost=1500,engine_cost=5000,general_cost=1000,tyre;
   
   char name[20],vehicle_name[10];
   
    printf("*******Welcome to the vehicle service center********\n");
   
    printf("Enter the Owner Name: ");
    scanf("%s",name);
   
    printf("Enter the type of vehicles(2 wheelar,3 wheelar,4 wheelar): ");
    scanf("%d",&wheels);
   
  if(wheels>4)
   {    
       
       printf("This service center is not accepting other than 2 wheelar,3 wheelar,4 wheelar.");
   }
   else
   {
           printf("What's the age of the vehicle(in months): ");
           scanf("%d",&age);
           
           if(age<8)
           {
               printf("Name of the owner is %s\n",name);
               printf("Your vehicle service will done after a while.");
           }
           else
           {
               printf("Enter 1 for tyre problem.\n");
               printf("Enter 2 for fuel problem.\n");
               printf("Enter 3 for engine problem.\n");
               printf("Enter 4 for general service.\n");
               
               printf("Please choose any option: ");
               scanf("%d",&ch);
               printf("\n\n");
               
               if(ch==1)
               {
                   printf("You are facing tyre problems.\n\n");
                   printf("how many tyres yor are facing the issue??: ");
                   scanf("%d",&tyre);
                   if((wheels==2)&&(tyre==1||tyre==2))
                  { 
                     ttl_tyre_cost=tyre_cost*tyre;
                   
                   
                     printf("Enter the Vehicle Name: ");
                     scanf("%s",vehicle_name);
                     printf("*************************\n");
                     printf("Name of the owner is %s\n",name);
                     printf("Name of the Vehicle is %s\n",vehicle_name);
                     printf("Issue: tyres Problem.\n");
                     printf("Bill:%d",ttl_tyre_cost);
                  }
                  else if((wheels==3)&&(tyre==1||tyre==2||tyre==3))
                  {
                     ttl_tyre_cost=tyre_cost*tyre;
                   
                   
                     printf("Enter the Vehicle Name: ");
                     scanf("%s",vehicle_name);
                     printf("***********************\n");
                     printf("Name of the owner is %s\n",name);
                     printf("Name of the Vehicle is %s\n",vehicle_name);
                     printf("Issue: tyres Problem.\n");
                     printf("Bill:%d",ttl_tyre_cost);
                  }
                  else if((wheels==4)&&(tyre==1||tyre==2||tyre==3||tyre==4))
                  {
                     ttl_tyre_cost=tyre_cost*tyre;
                   
                   
                     printf("Enter the Vehicle Name: ");
                     scanf("%s",vehicle_name);
                     printf("******************\n");
                     printf("Name of the owner is %s\n",name);
                     printf("Name of the Vehicle is %s\n",vehicle_name);
                     printf("Issue: tyres Problem.\n");
                     printf("Bill:%d",ttl_tyre_cost); 
                  }
                  
                  else
                  {
                      printf("**************************\n");
                      printf("Name of the owner is %s\n",name);
                      printf("Wheels is not available in the vehicle.");
                  }
                }
                if(ch==2)
               {
                   printf("yor are facing fuel problem.\n");
                   printf("**********************\n");
                   
                   printf("Enter the vehicle Name: ");
                   scanf("%s",vehicle_name);
                   printf("******************\n");
                   printf("Name of the owner is %s\n",name);
                   printf("Name of the Vehicle is %s\n",vehicle_name);
                   printf("Issue: fuel Problem.\n");
                   printf("Bill: %d",fuel_cost);
                }
                
                if(ch==3)
               {
                   printf("yor are facing engine problem.\n");
                   printf("**********************\n");
                   
                   printf("Enter the vehicle Name: ");
                   scanf("%s",vehicle_name);
                   printf("******************\n");
                   printf("Name of the owner is %s\n",name);
                   printf("Name of the Vehicle is %s\n",vehicle_name);
                   printf("Issue: Engine Problem.\n");
                   printf("Bill: %d",engine_cost);
                }
                
                if(ch==4)
               {
                   printf("yor are facing general service problem.\n");
                   printf("**********************\n");
                   
                   printf("Enter the vehicle Name: ");
                   scanf("%s",vehicle_name);
                   printf("******************\n");
                   printf("Name of the owner is %s\n",name);
                   printf("Name of the Vehicle is %s\n",vehicle_name);
                   printf("Issue: General service Problem.\n");
                   printf("Bill: %d",general_cost);
                }
                
              
            }
       
   }
    

    return 0;
}