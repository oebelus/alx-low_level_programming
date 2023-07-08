# 0x14. C - Bit manipulation
![Bit manipulation](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/232/bitwise.PNG)

## Tasks

### 0. 0
Write a function that converts a binary number to an unsigned int: [0. 0](0-binary_to_uint.c)
 - Prototype: unsigned int binary_to_uint(const char *b);
 - where b is pointing to a string of 0 and 1 chars
 - Return: the converted number, or 0 if:
        - there is one or more chars in the string b that is not 0 or 1
        - b is NULL 
<br><br>
### 1. 1
Write a function that prints the binary representation of a number: [1. 1](1-print_binary.c)

  - Prototype: void print_binary(unsigned long int n);
  - Format: see example
  - You are not allowed to use arrays
  - You are not allowed to use malloc
  - You are not allowed to use the % or / operators
<br><br>
### 2. 10
Write a function that returns the value of a bit at a given index: [2. 10](2-get_bit.c)

  - Prototype: int get_bit(unsigned long int n, unsigned int index);
  - where index is the index, starting from 0 of the bit you want to get
  - Returns: the value of the bit at index index or -1 if an error occured
<br><br>
### 3. 11
Write a function that sets the value of a bit to 1 at a given index: [3. 11](0x14-bit_manipulation/3-set_bit.c)

  - Prototype: int set_bit(unsigned long int *n, unsigned int index);
  - where index is the index, starting from 0 of the bit you want to set
  - Returns: 1 if it worked, or -1 if an error occurred
<br><br>
### 4. 100
Write a function that sets the value of a bit to 0 at a given index: [4. 100](4-clear_bit.c)

  - Prototype: int clear_bit(unsigned long int *n, unsigned int index);
  - where index is the index, starting from 0 of the bit you want to set
  - Returns: 1 if it worked, or -1 if an error occurred
<br><br>
### 5. 101
Write a function that returns the number of bits you would need to flip to get from one number to another: [5. 101](4-flip_bits.c)

  - Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
  - You are not allowed to use the % or / operators

