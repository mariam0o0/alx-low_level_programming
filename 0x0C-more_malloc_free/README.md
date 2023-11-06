# 0x0C. C - More malloc, free


## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

How to use the exit function

What are the functions calloc and realloc from the standard library and how to use them

## Requirements
Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc... is forbidden

You are allowed to use _putchar

You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account

The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

Don't forget to push your header file

## File: 0-malloc_checked.c
A function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);

Returns a pointer to the allocated memory

if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
## File: 1-string_nconcat.c
a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);

The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated

If the function fails, it should return NULL

If n is greater or equal to the length of s2 then use the entire string s2

if NULL is passed, treat it as an empty string
## File: 2-calloc.c
a function that allocates memory for an array, using malloc.

Prototype: void *_calloc(unsigned int nmemb, unsigned int size);

The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.

The memory is set to zero

If nmemb or size is 0, then _calloc returns NULL

If malloc fails, then _calloc returns NULL

FYI: The standard library provides a different function: calloc. Run man calloc to learn more.
## file: 3-array_range.c
a function that creates an array of integers.

Prototype: int *array_range(int min, int max);

The array created should contain all the values from min (included) to max (included), ordered from min to max

Return: the pointer to the newly created array

If min > max, return NULL

If malloc fails, return NULL
