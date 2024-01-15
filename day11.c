#include <stdio.h>

// Define the structure for student details
typedef struct {
	int idNo;
	char name[100];
	char gender[10];
	int units_taken;
	int grade;
}Student;

//Function to input details for a student
void inputStudentDetails(Student *student){
	printf("Enter student ID: \n");
	scanf("%d", &student->idNo);

	printf("Enter student name: \n");
        scanf("%s", student->name);

	printf("Enter student gender : \n");
        scanf("%s", student->gender);

	printf("Enter units taken by student: \n");
        scanf("%d", &student->units_taken);

	printf("Enter student grade: \n");
        scanf("%d", &student->grade);
}

//Function to display details of a student

void displayStudentDetails(Student *student){
	printf("Student ID: %d\n", student->idNo);
	printf("Student Name: %s\n", student->name);
	printf("Student gender: %s\n", student->gender);
	printf("Units taken by student : %d\n", student->units_taken);
	printf("Student mean grade: %d\n", student->grade);
}

int main(){
	Student students[5];

	for (int i=0; i<5; i++){
		inputStudentDetails(&students[i]);
	}

	int idSearch;

	printf("Enter student ID to search: ");
	scanf("%d", &idSearch);

	int found = 0;
	for (int i = 0; i<5; i++){
		if (students[i].idNo == idSearch){
			found = 1;
			displayStudentDetails(&students[i]);
			break;
		}
	}

	if (!found){
		printf("student with ID %d not found. \n", idSearch);
	}

	return 0;
}



