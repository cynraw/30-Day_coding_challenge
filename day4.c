#include <stdio.h>
#include <string.h>

int sum(int c); // function declaration

int main(){
	int result = sum(7);
	printf("%d", result);
	return 0;
}

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

