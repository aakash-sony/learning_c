#include <stdio.h>
#include<string.h>
// Irctc Login
int main()
{
    char user[20], pass[15], capt[8];

    printf("Enter user Name: ");
    scanf("%s", user);
    printf("Enter Password: ");
    scanf("%s", pass);
    printf("Enter Captcha Code: ");
    scanf("%s", capt);

    if (strcmp(user, "Akash") == 0)
    {
        if (strcmp(pass, "Indian") == 0)
        {
            if (strcmp(capt, "hyd-1") == 0)
            {
                printf("Welcome To Irctc.");
            }
            else
            {
                printf("Invalid captcha.");
            }
        }
        else
        {
            printf("Invalid Password.");
        }
    }
    else
    {
        printf("Invalid User Name.");
    }

    return 0;
}