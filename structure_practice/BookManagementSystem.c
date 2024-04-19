#include <stdio.h>

struct book
{
    char bookName[30];
    int book_id;
    char author[30];
    float price;
};

struct book inputBookDetails_1();
struct book inputBookDetails_2();
void printBookDetails_1(struct book b1);
void printBookDetails_2(struct book b2);

void main()
{
    struct book b1;
    struct book b2;
    b1 = inputBookDetails_1();
    b2 = inputBookDetails_2();
    printBookDetails_1(b1);
    printBookDetails_2(b2);
}

struct book inputBookDetails_1()
{
    struct book b1;
    puts("\nEnter Book Details-1");
    printf("Enter Book Name: ");
    gets(b1.bookName);

    printf("Enter Book Author Name: ");
    gets(b1.author);

    printf("Enter Book Id: ");
    scanf("%d", &b1.book_id);

    printf("Enter Book Price: ");
    scanf("%f", &b1.price);
    return b1;
}
struct book inputBookDetails_2()
{
    struct book b2;
    puts("\nEnter Book Details-2");
    printf("Enter Book Name: ");
    scanf("%s",b2.bookName);

    printf("Enter Book Author Name: ");
    scanf("%s",b2.author);

    printf("Enter Book Id: ");
    scanf("%d", &b2.book_id);

    printf("Enter Book Price: ");
    scanf("%f", &b2.price);
    return b2;
}

void printBookDetails_1(struct book b1)
{
    printf("\nBook Details-1: ");
    printf("\nBook Name : %s", b1.bookName);
    printf("\nBook Author Name : %s", b1.author);
    printf("\nBook ID : %d", b1.book_id);
    printf("\nBook Price: %f", b1.price);
}
void printBookDetails_2(struct book b2)
{
    printf("\nBook Details-2: ");
    printf("\nBook Name : %s", b2.bookName);
    printf("\nBook Author Name : %s", b2.author);
    printf("\nBook ID : %d", b2.book_id);
    printf("\nBook Price: %f", b2.price);
}
