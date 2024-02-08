#include <stdio.h>
#include <string.h>
typedef struct students 
{
  char name[50];
  char branch[50];
  int ID_no;
} students;
int main()
{
  students st;
  strcpy(st.name,"Havvanur Dogan"); 
  strcpy(st.branch,"Computer Engineering");    
  st.ID_no = 84;
  printf("Name: %s\n", st.name);
  printf("Branch: %s\n", st.branch);
  printf("ID_no: %d\n", st.ID_no);
  return 0;
}
