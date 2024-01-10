#include <stdio.h>
#include <stdlib.h>

/**
 * main() - entry point of the program
 *
 * return - always 0
 */
int main()
{
	int option, n1, n2;
	float result;
	char c;
	
	while(1){
		printf("Select any one operation");
		printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
		printf("\nchoose one option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				printf("For Addition");
				printf("\n Enter first number:");
				scanf("%d", &n1);
				printf("\n Enter second number:");
				scanf("%d", &n2);
				result = n1 + n2;
				printf("Addition = %.0f", result);
				break;
			 case 2:
                                printf("For Subtraction");
                                printf("\n Enter first number:");
                                scanf("%d", &n1);
                                printf("\n Enter second number:");
                                scanf("%d", &n2);
                                result = n1 - n2;
                                printf("Subtraction = %.0f", result);
                                break;
			case 3:
                                printf("For Multiplication");
                                printf("\n Enter first number:");
                                scanf("%d", &n1);
                                printf("\n Enter second number:");
                                scanf("%d", &n2);
                                result = n1 * n2;
                                printf("Multiplication = %.0f", result);
                                break;

			case 4:
                                printf("For Division");
                                printf("\n Enter first number:");
                                scanf("%d", &n1);
                                printf("\n Enter second number:");
                                scanf("%d", &n2);
                                result = n1 / n2;
                                printf("Division = %.0f", result);
                                break;

			case 5:
				printf("Exited");
				exit(0);
				break;

			default:
				printf("Invalid option!");
		}

		printf("\n");
	}
	return (0);


}

