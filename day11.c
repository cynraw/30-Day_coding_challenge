#include <stdio.h>
#include <stdlib.h>

// Define Student structure
typedef struct
{
    int id;
    char name[50];
    char gender[10];
    float gpa;
} learner;

// Function prototypes
void get_details(learner *student);
void print_details(learner student);
void search_student(learner students[], int size, int search_id);
void save_file(learner students[], int size);

int main()
{
    int num_students;

    /* Input the number of students dynamically */
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    /* Allocate memory for the array of learners */
    learner *students = (learner *)malloc(num_students * sizeof(learner));

    if (students == NULL)
    {
        printf("Memory allocation failed. Exiting.\n");
        return (1);
    }

    int i;

    /* Input and store details of students */
    for (i = 0; i < num_students; i++)
    {
        printf("\nEnter details for student %d\n", (i + 1));
        get_details(&students[i]);
    }

    /* Print stored details of students */
    printf("\nEntered student details:\n");
    printf("ID\tNAME\t\t\tGENDER\tGPA\n");
    printf("-----------------------------------------------\n");
    for (i = 0; i < num_students; i++)
    {
        print_details(students[i]);
    }

    /* Search for a student by ID */
    int search_id;
    printf("\nEnter student ID to search: ");
    scanf("%d", &search_id);
    search_student(students, num_students, search_id);

    /* Save data to a file */
    save_file(students, num_students);

    /* Free dynamically allocated memory */
    free(students);

    return 0;
}


/* Get student details as input */
void get_details(learner *student)
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

/* Print student details */
void print_details(learner student)
{
    printf("%d\t", student.id);
    printf("%s\t\t", student.name);
    printf("%s\t", student.gender);
    printf("%.2f\n", student.gpa);
}

/* Search for a student by ID */
void search_student(learner students[], int size, int search_id)
{
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (students[i].id == search_id)
        {
            printf("\nStudent found:\n");
            print_details(students[i]);
            found = 1;
            break;
            }
        }
        if (!found)
        {
                printf("\nStudent with ID %d not found.\n", search_id);
        }
}

/* Save data to a file */
void save_file(learner students[], int size)
{
    FILE *file = fopen("student_data.txt", "w");

    if (file != NULL)
    {
        fprintf(file, "ID\tNAME\t\t\tGENDER\tGPA\n");
        fprintf(file, "-----------------------------------------------\n");

        for (int i = 0; i < size; i++)
        {
            fprintf(file, "%d\t%s\t\t%s\t%.2f\n", students[i].id, students[i].name, students[i].gender, students[i].gpa);
        }

        fclose(file);
        printf("\nData saved to 'student_data.txt'.\n");
    }
    else
    {
        printf("\nError opening file for writing.\n");
    }
}

