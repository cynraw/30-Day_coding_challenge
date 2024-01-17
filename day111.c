#include <stdio.h>
#include <string.h>

// Define Student structure
struct learner
{
    int id;
    char name[50];
    char gender[10];
    float gpa;
};

// Function prototypes
void get_details(struct learner* student);
void print_details(struct learner student);

int main()
{
    struct learner students[2];
    int i;

    // Input and store details of 2 students
    for (i = 0; i < 2; i++)
    {
        printf("Enter details for student %d\n", (i + 1));
        get_details(&students[i]);
    }

    // Print stored details of 2 students
    printf("\nEntered student details:\n");
    printf("ID\tNAME\t\t\tGENDER\tGPA\n");
    printf("-----------------------------------------------\n");
    for (i = 0; i < 2; i++)
    {
        print_details(students[i]);
    }
    return 0;
}

// Get student details as input
void get_details(struct learner* student)
{
    printf("\nEnter student ID: ");
    scanf("%d", &student->id);

    printf("Enter name: ");
    scanf(" %[^\n]%*c", student->name);

    printf("Enter gender: ");
    scanf(" %[^\n]%*c", student->gender);

    printf("Enter GPA: ");
    scanf("%f", &student->gpa);
}

// Print student details
void print_details(struct learner student)
{
    printf("%d\t", student.id);
    printf("%s\t\t", student.name);   // Adjust width for proper alignment
    printf("%s\t", student.gender); // Adjust width for proper alignment
    printf("%.2f\n", student.gpa);
}

