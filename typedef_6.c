#include <stdio.h>
#include <string.h>
typedef struct employee {
  char name[50];
  char department[100];
  float salary;
} employee ;

int main() {
  employee e1;
  strcpy(e1.name, "George Lucas");
  strcpy(e1.department,"Machine");
  e1.salary = 8500;
  printf("Name: %s\n", e1.name);
  printf("Department: %s\n", e1.department);
  printf("Salary: %.2f", e1.salary);

  return 0;
}
