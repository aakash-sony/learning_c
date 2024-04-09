#include<stdio.h>
#include<string.h>
//Gmail Login
int main()
{
    char user[20],pass[10];

    printf("Enter user name: ");
    scanf("%s",user);

    if(strcmp(user,"Akash")==0)
    {
        printf("Enter password: ");
        scanf("%s",pass);
        if(strcmp(pass,"Indian")==0)
        {
            printf("Successfully Login.");
        }
        else
        {
            printf("Invalid password.");
        }
    }
    else
    {
        printf("Invalid user name.");
    }

    return 0;
}