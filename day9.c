#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr1, *ptr2;
    int size=10;
    printf("The size of given array is: %d\n", size);
    ptr1=(int*)malloc(size*sizeof(int));
    ptr2=(int*)calloc(size,sizeof(int));
    ptr1=(int*)realloc(ptr1, 20);
    if (ptr1==NULL || ptr2==NULL)
    {
        printf("Memory allocation not sucessful.\n");
        exit(0);
    }
    else
    {
        printf("Memory allocation using malloc() and calloc() is successful.\n");
        ptr1=(int*)realloc(ptr1, 20);
        if (ptr1==NULL)
        {
            printf("Memory allocation not sucessful.\n");
            exit(0);
        }
        else
        {
            printf("Memory reallocation using realloc() is successful.\n");
        }
    }
    free(ptr1);
    printf("Memory became free.\n");
    free(ptr2);
    printf("Memory became free.\n");
    return 0;
}
