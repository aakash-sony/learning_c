#include<stdio.h>
#include<string.h>
//Net Banking Style Login
int main()
{
  char user[20],pass[10],capt[8];

  printf("Enter username: ");
  scanf("%s",user);
  printf("Enter password: ");
  scanf("%s",pass);
  printf("Enter the captcha: ");
  scanf("%s",capt);

  if(strcmp(user,"Akash")==0&&strcmp(pass,"Indian")==0&&strcmp(capt,"hyd-1")==0)
  {
    printf("Welcome to HDFC Bank");
  }
  else
  {
    printf("Invalid username/password/captcha");
  }
}