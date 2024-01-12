# 30-Day_coding_challenge
Playing this discipline game of coding. Its going to be fun.

# Log summary
## Day 0
### 4/01/24
# structures
- Way to group several related variables in one place.
- Each variable in a structure is known as a member of the structure.
- Unlike Array, a structure can contain many different data types.

## Day 1
### 5/01/24
# Typedef for structures
- Typedef keyword is used to define an alias for the already existing datatype.
- In structures, we have to use the struct keyword along with the structure name to define the variables.
- Sometimes, this increases the length and complexity of the code.
- We can use the typedef to define some new shorter name for the structure.
- This helps in enhancing code readability by allowing the use of a more meaningful name.
- It also makes a program less lengthy.

## Day 2
### 6/01/24
# Arrays
- Is a variable that can store multiple values in contagious memory locations.
- Used to store a collection of variables of same type.
- In C we have to declare an array before using it.
- Initialization is the process to assign some initial value to the variable.
- If we initialize an array using an initializer list, we can skip declaring the size of the array as the compiler can automatically deduce the size of the array in these cases.
- An element is accessed by indexing the array name.

## Day 3
### 7/01/24
# Recursion
- A function that calls itself is known as a recursive function.
- The technique is known as recursion.
- The recursion continues until some condition is met.
- Usually conditional statements, ie if...else ,are used to prevent in finite loop.

## Day 4
### 8/01/24
# Strings(part 1)
- Strings in C is an array of characters.
- Its datatype is always char(in c).
- Strings are used for storing text or characters.
- Unlike other programming lamguages, C does not have a string type.
- Instead, the char type is used to create an array of characters to make a string in C.
- Elements in a string are accessed through indexing, just like in arrays.

## Day 5
### 9/01/24
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
# 
//
