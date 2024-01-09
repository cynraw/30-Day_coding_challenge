#include <stdio.h>
#include <string.h>

int main(){
	// string concatination
	
	char fName[10] = "cynthia ";
	char lName[10] = "Ronoh";
	strcat(fName, lName);
	printf("string concat is:%s\n", fName);
	
	// string length
	
	char strA[] = "Hello, world";
	int len = strlen(strA);
	printf("string len is :%d\n", len);

	// string copy
	
	char str1[] = "My year!";
	char str2[9];
	strcpy(str2, str1);
	printf("copied string is: %s\n", str2);

	// string comparison
	
	char strc[] = "cynraw";
	char strd[] = "cheptanui";
	int outcome = strcmp(strc, strd);
	if (outcome == 0){
		printf("The strings are equal\n");
	}
	else if (outcome < 0){
		printf("strc comes before strd\n");
	}
	else{
		printf("strd comes before strc\n");
	}

	return 0;

}	
