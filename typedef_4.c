#include<stdio.h>
typedef struct book
{
    char title[100];
    char publisher[100];
    char authors[100];
    int year;
   int pages;
} book;
int main()
{

    book b1 = {
                "Reader at Work",
                "METU" ,
                "Bulent Kandiller and Aysun Velioglu",
                 2021,
                 361
              };
    printf("Title: %s\n", b1.title);
    printf("Authors: %s\n", b1.authors);
    printf("Publisher: %s\n", b1.publisher);
    printf("Year: %d\n", b1.year);
    printf("Pages: %d\n", b1.pages);
    return 0;
}
