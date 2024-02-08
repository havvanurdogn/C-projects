#include <stdio.h>
#include <string.h>
typedef struct book
{
 char title[100];
 char author[100];
 int book_id;
} book;
int main( )
{
 book b1;
 strcpy( b1.title, "Oliver Twist");
 strcpy( b1.author, "Charles Dickens");
 b1.book_id = 7872963;
 printf( "Book title : %s\n", b1.title);
 printf( "Book author : %s\n", b1.author);
 printf( "Book book_id : %d\n", b1.book_id);
 return 0;
}

