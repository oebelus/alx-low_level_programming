# Pointers, Arrays, and Strings in C

This repository contains examples and exercises related to pointers, arrays, and strings in the C programming language from ALX problems. These concepts are fundamental to programming in C, and understanding how they work is essential for anyone looking to develop low-level systems software or optimize performance-critical code.

### 0. strcat 
Write a function that concatenates two strings: [_strcat](0x06-pointers_arrays_strings/0-strcat.c) <br>
	- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	- Returns a pointer to the resulting string dest

### 1- strncat
Write a function that concatenates two strings: [_strncat](0x06-pointers_arrays_strings/1-strncat.c) <br>

	- The _strncat function is similar to the _strcat function, except that
	- it will use at most n bytes from src; and
	- src does not need to be null-terminated if it contains n or more bytes
	- Return a pointer to the resulting string dest
