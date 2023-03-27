# Pointers, Arrays, and Strings in C

This repository contains examples and exercises related to pointers, arrays, and strings in the C programming language from ALX problems. These concepts are fundamental to programming in C, and understanding how they work is essential for anyone looking to develop low-level systems software or optimize performance-critical code.

### 0. 98 Battery st. 
[reset_to_98](0x05-pointers_arrays_strings/0-reset_to_98.c)<br>
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98. 

### 1. Don't swap horses in crossing a stream 
[swap_int](0x05-pointers_arrays_strings/1-swap.c)<br>
Write a function that swaps the values of two integers. 

### 2. This report, by its very length, defends itself against the risk of being read
[_strlen](0x05-pointers_arrays_strings/2-strlen.c)<br>
Write a function that returns the length of a string. <br>
 - To use the `strlen` function, you should include the `string.h` library at the beginning of your code 

### 3. I do not fear computers. I fear the lack of them 
[_puts](0x05-pointers_arrays_strings/3-puts.c)<br>
Write a function that prints a string, followed by a new line, to stdout.<br>
 - To use the `puts` function, you should include the `stdio.h` library at the beginning of your code 

### 4. I can only go one way. I've not got a reverse gear 
[print_rev](0x05-pointers_arrays_strings/4-print_rev.c)<br>
Write a function that prints a string, in reverse, followed by a new line.

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes 
[rev_string](0x05-pointers_arrays_strings/5-rev_string.c)<br>
Write a function that reverses a string. <br> <br>
The reason for iterating only over the first half of the string (up to len/2) is that after that point, all the characters in the string will have been swapped.<br>

When reversing a string, you need to swap the first character with the last character, the second character with the second-to-last character, and so on, until you reach the middle of the string.<br>

If you continue the loop beyond the middle of the string, you would just be swapping the characters back to their original positions, undoing the work that you did earlier in the loop.