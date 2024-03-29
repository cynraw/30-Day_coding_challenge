#include <stdio.h>
#include <string.h>

int sum(int c); // function declaration
/**
 * main - Main function, entry and exit point of the program.
 *
 * return - 0 (success)
 */
int main(){
	int result = sum(7);
	printf("%d", result);
	return 0;
}

/**
 * sum - function to illustrate recursion in c
 *
 * return - integer
 */
int sum(int c){
	if (c > 0)
	{
		return c + sum(c-1); // function calling itself
	}
	else
	{
		return 0;
	}
}

