#include <stdio.h>
#include <string.h>

int main(){

	// Array declaration
	int n[5]; /* n is an array of 5 integers */

	char letters[6] = {'c', 'y', 'n', 'r', 'a', 'w'}; /*declaring with an initializer list*/

	// Array initialization after declaration using a for loop
	//int n[5];
	int i,j;

	/*initialize elements of array to 0*/
	for ( i=0; i<5; i++){
		n[i] = i + 30; /* set elements at location i to i+30 */
	}

	/*Output each array element's value*/
	for (j=0; j<5; j++){
		printf("Element [%d] = %d\n", j, n[j]);
	}

	return 0;
}


