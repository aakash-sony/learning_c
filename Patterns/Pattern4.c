#include<stdio.h>

<<<<<<< HEAD

int main()
{
    int i,j,rows,space;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
=======
int main()
{
 int i,j,rows;

   printf("Enter the number of rows: ");
    scanf("%d",&rows);
   for(i=1;i<=rows;i++)
>>>>>>> e234f23f0fbcf8ca0e4c816ed4a3dcfc34f065c2
    {
        for(j=1;j<=rows;j++)
        {
            if((i+j)<=rows)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
<<<<<<< HEAD
        // for(space=1;space<=(rows-1);space++)
        // {
        //      printf(" ");
        // }
        // for(j=1;j<=i;j++)
        // {
        //     printf(" *");
        // }
        printf("\n");
=======

>>>>>>> e234f23f0fbcf8ca0e4c816ed4a3dcfc34f065c2
    }
    return 0;
}