#include <stdio.h>

struct Student
{
    char name[25];
    int age;
    float height, weight;
    int marks[6];    // marks per subject
    long rollNumber; // 4 digit roll number
};

struct Student inputStudentDetails();
void printStudentDetails(struct Student stu);

void main()
{
    struct Student stu;
    stu = inputStudentDetails();
    printStudentDetails(stu);
}

struct Student inputStudentDetails()
{
    struct Student stu;
    printf("Enter student details: ");
    printf("\nEnter student name : ");
    scanf("%s", stu.name);

    printf("Enter student age : ");
    scanf("%d", &stu.age);

    printf("Enter student height : ");
    scanf("%f", &stu.height);

    printf("Enter student weight : ");
    scanf("%f", &stu.weight);

    printf("Enter student roll number : ");
    scanf("%d", &stu.rollNumber);

    printf("Enter student marks : \n");

    for (int i = 0; i < 6; i++)
    {
        printf("Enter %dth subject mark: ", (i + 1));
        scanf("%d", &stu.marks[i]);
    }
    return stu;
}

void printStudentDetails(struct Student stu)
{
    printf("\nStudent Details are: ");
    printf("Student Name: %s", stu.name);
    printf("\nStudent Age: %d", stu.age);
    printf("\nStudent weight: %f", stu.weight);
    printf("\nStudent height: %f", stu.height);
    printf("\nStudent Roll Number: %ld", stu.rollNumber);
    printf("\nStudent Marks are: ");
    for(int i=0;i<6;i++)
    {
        printf("\n%d Subject marks: %d",i+1,stu.marks[i]);
    }
}