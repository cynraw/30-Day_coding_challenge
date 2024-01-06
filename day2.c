#include <stdio.h>

typedef struct student{
	int idNo;
	char gender;
}student;

int main(){
	student s1;
	s1.idNo = 1002;
	s1.gender = 'F';

	printf("%d \n", s1.idNo);
	printf("%c \n", s1.gender);

	return 0;
}

