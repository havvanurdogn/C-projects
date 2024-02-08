#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[50];
    int stunum;
}student;
int main()
{
    student s1;
    strcpy(s1.name,"Anil Can Eren");
    s1.stunum=57;
    printf("Student name is %s\n",s1.name);
    printf("Student number is %d",s1.stunum);
    return 0;
}
