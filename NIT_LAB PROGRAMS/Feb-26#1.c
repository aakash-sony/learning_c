#include <stdio.h>

int main()
{
    int hostelFee = 900000, busFee = 30000, studyFee = 50000,
        uniformFee = 2000, booksFee = 5000, totalFees1, totalFees2;
    char name[15];
    char branch[10];
    char ch;

    printf("Enter the student Name: ");
    scanf("%s", name);

    printf("Enter the student Branch: ");
    scanf("%s", branch);

    printf("Student stay in hostel or come in bus(enter 'h' for hostel and 'b' for bus): ");
    scanf(" %c", &ch);

    totalFees1 = hostelFee + studyFee + uniformFee + booksFee;
    totalFees2 = busFee + studyFee + uniformFee + booksFee;

    (ch == 'h' || ch == 'H') && printf("Total fees of the student is= %d", totalFees1);
    (ch == 'b' || ch == 'B') && printf("Total Fees of the student is= %d", totalFees2);

    return 0;
}
