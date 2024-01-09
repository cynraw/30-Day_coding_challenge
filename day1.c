#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  int salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "Cynthia Ronoh");

  // assign values to other person1 variables
  person1.citNo = 2001;
  person1. salary = 2500000;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %d\n", person1.salary);

  return 0;
}
