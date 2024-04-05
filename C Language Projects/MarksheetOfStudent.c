#include <stdio.h>
#include <stdlib.h>
void welcomeMessage();
void generateMarksheet();
void subName_marks();
void take_user_info();
void subject_wise_Marks();
void printingTotal();

  char name[30], father_name[30], mother_name[30], sch_name[30], dob[20], class[10],
    subjectName[6][16] = {"HINDI", "ENGLISH", "MATH", "SCIENCE", "SOCIAL", "ART"}, ch;
  int roll_number, i, subMarks[6], max_marks = 100, obtain_marks = 0;
  float percentage, count = 1;

int main()
{
    welcomeMessage();
    subject_wise_Marks();
    generateMarksheet();
    printingTotal();
    return 0;
}
void welcomeMessage()
{
    puts("\n********************Welcome to Marksheet generation Project*******************************\n");
    puts("If you want to generate the marksheet then you have to provide some information:-");
    printf("For providing information press 'y' otherwise 'n': ");
    scanf("%c", &ch);
    if (ch == 'y' || ch == 'Y')
    {
        take_user_info();
    }
    else
    {
        exit(0);
    }
}
void generateMarksheet()
{

    puts("****************************************************************************");
    puts("\t\t  UP Board High School Examination Marksheet");
    puts("----------------------------------------------------------------------------");
    printf("\tStudent Name: %s                \tRoll Number: %d", name, roll_number);
    printf("\n\tFather Name: %s", father_name);
    printf("\n\tMother Name: %s", mother_name);
    printf("\n\tDOB: %s", dob);
    printf("\n\tSchool Name: %s", sch_name);
    puts("\n-------------------------------------------------------------------------------");
    printf("\tSUBJECTS       \tMax Marks     \tObtained Marks      \tPass/Fail\n");
    puts("-------------------------------------------------------------------------------");

    subName_marks();
}
void subName_marks()
{
    for (i = 0; i < 6; i++)
    {
        printf("\t%s\t\t%d\t\t\t%d\t\t\t%s\n", subjectName[i], max_marks, subMarks[i], subMarks[i] >= 35 ? "P" : "F");
    }
}
void take_user_info()
{
    printf("Enter Student Name: ");
    scanf("%s",name);
    printf("Enter Father Name: ");
    scanf("%s",father_name);
    printf("Enter Mother Name: ");
    scanf("%s",mother_name);
    printf("Enter Date of Birth: ");
    scanf("%s",dob);
    printf("Enter School Name: ");
    scanf("%s", sch_name);
    printf("Enter the Class Name: ");
    scanf(" %s", class);
    printf("Enter Roll Number: ");
    scanf("%d", &roll_number);
}
void subject_wise_Marks()
{
    puts("\nEnter subject wise marks: ");
    for (i = 0; i < 6; i++)
    {
    repeat:
        printf("Enter %s Marks: ", subjectName[i]);
        scanf("%d", &subMarks[i]);
        if (subMarks[i] >= 0 && subMarks[i] <= 100)
        {
            obtain_marks += subMarks[i];
            if (subMarks[i] < 35)
            {
                count = 0;
            }
        }
        else
        {
            puts("Marks can't be in negative and greater than 100.");
            goto repeat;
        }
    }
}
void printingTotal()
{
    percentage = obtain_marks / 6.0;
    puts("-------------------------------------------------------------------------------");
    printf("\t\tTotal:   %d\t  Obtained: %d\t\tPercentage: %.2f", max_marks * 6, obtain_marks, percentage);
    puts("\n-------------------------------------------------------------------------------");
    if (count == 0)
    {
        printf("You got less than 35 in one subject\n");
        puts("Fail");
    }
    else if (percentage > 60)
    {
        puts("\t\t\t\t\tIst Division");
    }
    else if (percentage > 50 && percentage <= 60)
    {
        puts("\t\t\t\t\t2nd Division");
    }
    else if (percentage > 35 && percentage <= 50)
    {
        puts("\t\t\t\t\t3rd Division");
    }
    else
    {
        puts("\t\t\t\t\tFail.");
    }
    puts("================================================================================");
}
