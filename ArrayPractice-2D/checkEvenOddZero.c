#include<stdio.h>
int main()
{
    int nr,nc,r,c,even,odd,zero;
    int arr[10][10];
    printf("Enter number of rows and column: ");
    scanf("%d%d",&nr,&nc);
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            printf("Enter [%d][%d] element: ",r,c);
            scanf("%d",&arr[r][c]);
        }
    }
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            printf("%d\t",arr[r][c]);
        }
        printf("\n");
    }
    printf("\tEven\tOdd\tZero\n");
    printf("*****************************************************\n");
    for(r=0;r<nr;r++)
    {
        for(even=0,odd=0,zero=0,c=0;c<nc;c++)
        {
            if(arr[r][c]==0)
            {
                zero++;
            }
            else if(arr[r][c]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        printf("%d-row\t%d\t%d\t%d\n",r+1,even,odd,zero);
    }
    
    return 0;
}