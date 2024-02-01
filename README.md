# 30-Day_coding_challenge
Code with me

# Log summary
## Day 0
# structures
- Way to group several related variables in one place.
- Each variable in a structure is known as a member of the structure.
- Unlike Array, a structure can contain many different data types.

## Day 1
# Typedef for structures
- Typedef keyword is used to define an alias for the already existing datatype.
- In structures, we have to use the struct keyword along with the structure name to define the variables.
- Sometimes, this increases the length and complexity of the code.
- We can use the typedef to define some new shorter name for the structure.
- This helps in enhancing code readability by allowing the use of a more meaningful name.
- It also makes a program less lengthy.

## Day 2
# Arrays
- Is a variable that can store multiple values in contagious memory locations.
- Used to store a collection of variables of same type.
- In C we have to declare an array before using it.
- Initialization is the process to assign some initial value to the variable.
- If we initialize an array using an initializer list, we can skip declaring the size of the array as the compiler can automatically deduce the size of the array in these cases.
- An element is accessed by indexing the array name.

## Day 3
# Recursion
- A function that calls itself is known as a recursive function.
- The technique is known as recursion.
- The recursion continues until some condition is met.
- Usually conditional statements, ie if...else ,are used to prevent in finite loop.

## Day 4
# Strings(part 1)
- Strings in C is an array of characters.
- Its datatype is always char(in c).
- Strings are used for storing text or characters.
- Unlike other programming lamguages, C does not have a string type.
- Instead, the char type is used to create an array of characters to make a string in C.
- Elements in a string are accessed through indexing, just like in arrays.

## Day 5
# strings(part 2)
- Operations on strings
- It includes concatenation, finding length of string, copying string, comparing strings and extracting a portion of a string.

## Day 6
### 10/01/24
# Calculator in C
- Worked on a miniproject, created a calculator in C.
- used switch control statements to accomplish the project.

## Day 7
### 11/01/24
# File Handling in C
- A file is a sequence of bits used to store data permanently in the hard disk.
- There are two types of files text files(.txt) and binary files (.bin).
- Binary files are typically compiled text files and are more sequere since they store data in series of o's and 1's.
- Files enhance easy transfer of data from one machine to another.
- File handling operations include opening a file, creating a file, writing to a file and closing a file.
- To handle a file you need a file pointer of FILE datatype(defined in stdio header).
- A file pointer is a variable that stores the address of another variable of file datatype.
- To create the file variable fopen function is used.
- fopen("filename", "mode")- creates a file type pointer and returns address stored in the pointer that points to the buffer. 
- When opening a file, another instance of the file is opened in the RAM(main memory) and the changes made to the buffer file is loaded to the other file in the hard disk.
- fclose(pointer) - is used to close a file, this leads to deallocation of the dynamic memory that had been reserved for the buffer and the file type variable.

## Day 8
### 12/01/24
# Memory management in c(part 1)
-Memory management is one of the biggest advantages of C. It is one of the main reasons to use C for programming.
- Memory management or allocation is the process by which computer programs are assigned to physical or virtual memory space.
- Memory allocation can be done either before or at the time of program implementation.
- There are two techniques for memory allocation: static memory allocation and dynamic allocation.
## Static memory allocation 
- In this type of allocation, the compiler allocates a fixed amount of memory during compile time and the OS internally uses a data structure known as stack to manage the memory.
- Stack memory is used to store variables with short life spans within functions. It is a small, temporary storage area that is automatically managed by the compiler.
- When a function is executed, its associated stack frame is created in stack memory. Stack frames store variables, arguments, and other data associated with the function call.
- Stack memory is organized in a last-in, first-out (LIFO) manner. The most recent items added to the stack will be removed first.
- As a result of this feature, stack memory allows for quick allocation and deallocation of memory, making it very efficient when handling function calls and local variables.

## Day 9
### 13/01/24
# Memory management in c(part 2)
## Dynamic memory Allocation
- In this type of allocation, system memory is managed at runtime.
- Dynamic memory management in C programming is performed using the malloc(),calloc(),relloc(), and free() functions.
- This functions are defined in the <stdlib.h> C header file.
- It uses the heap space of the system memory.
- Heap memory stores variables that need to be accessed repeatedly or have longer lifespans.
- In contrast to stack memory, heap memory is not automatically managed by the compiler.
- Often, heap memory is used for datastructures like linked lists, trees and other dynamically allocated variables because it allows for flexible allocation of memory blocks.
#### calloc()
- Dynamically allocates an array of memory blocks of a specific type.
- Takes two arguments: the number of elements to allocate and the size for each element.
#### free()
- Dynamically de-allocates memory at runtime.
- It takes a single argument: a pointer to the block.
#### malloc()
- Allocates a block of memory in the heap, but does not initialize.
#### realloc()
- Reallocates a block of memory that was previously  allocated.
- It takes two arguments : a pointer to the previously allocated block and the new size of the block.

## Day 10
### 14/01/24
# Variable arguments in C
- Variable arguments are used by functions in the printf(printf, fprintf etc) family and others to allow a function to be called with a different number of arguments each time, hence the name varargs.
- I.e You may want to have a function which can take variable number of arguments for example parameters, instead of predefined number parameters.
- To implement functions using the variable arguments feature, use #include<stdarg.h>
- To call functions which take a variable number of arguments, ensure there is full prototype with the trailing ellipsis in scope: void err_exit(const char *format, ...);

## Day 11
### 15/01/24
# collaborative project on structs in c
- Create a program that defines a structure representing a student, prompting the user to input data for multiple students and displaying the information.


## Day 12
### 16/01/24
# Task 2
- Implement a program that uses nested structures, such as a structure representing a point within a structure representing a rectangle, demonstrating hierarchical data organization

## Day 13
### 17/01/24
# Task 3
-  Explore the concept of self-referential structures by creating a linked list node, allowing the user to add and remove elements from the list.

# Hash Tables
- Key value stores.
- Maps a key to a value, ie an assosiative array.
- One key can hold may values through chaining, linked lists.

