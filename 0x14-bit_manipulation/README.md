# 0x14. C - Bit manipulation
![Bit manipulation](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/232/bitwise.PNG)

## Tasks

### 0. 0
Write a function that converts a binary number to an unsigned int: [0. 0](0x14-bit_manipulation/0-binary_to_uint.c)
 - Prototype: unsigned int binary_to_uint(const char *b);
 - where b is pointing to a string of 0 and 1 chars
 - Return: the converted number, or 0 if:
        - there is one or more chars in the string b that is not 0 or 1
        - b is NULL 
<br><br>
### 1. 1
Write a function that prints the binary representation of a number: [1. 1](0x14-bit_manipulation/1-print_binary.c)

  - Prototype: void print_binary(unsigned long int n);
  - Format: see example
  - You are not allowed to use arrays
  - You are not allowed to use malloc
  - You are not allowed to use the % or / operators
