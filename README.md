# ft_printf

## 42 Project

This repository contains all the files for the **ft_printf** project, part of the curriculum at 42. It is a custom implementation of the `printf` function in the C programming language. The repository includes the `Makefile` and the `ft_printf.h` header file.

---

## About

The **ft_printf** project aims to create a simplified version of the standard `printf` function. This library can be reused in future projects within the 42 school curriculum, making the coding process more efficient and enjoyable. By coding this library, you will gain a deeper understanding of variadic arguments and formatting while expanding your toolset for upcoming projects. For more detailed information, you can refer to the [project subject here](https://www.42paris.com/).

All files and implementations are located in the same directory. The code follows the [Norminette](https://github.com/42School/norminette) style guidelines.

---

## Index

### Core Functions
- [`ft_printf.c`](https://github.com/your_username/your_repo/blob/main/ft_printf.c) - The main function that processes the format string and calls the appropriate output functions.
- [`ft_putint.c`](https://github.com/your_username/your_repo/blob/main/ft_putint.c) - Outputs an integer to the standard output.
- [`ft_putnbr.c`](https://github.com/your_username/your_repo/blob/main/ft_putnbr.c) - Outputs an integer number recursively, handling negative signs.
- [`ft_putui.c`](https://github.com/your_username/your_repo/blob/main/ft_putui.c) - Outputs an unsigned integer.
- [`ft_putchar.c`](https://github.com/your_username/your_repo/blob/main/ft_putchar.c) - Outputs a single character to the standard output.
- [`ft_putstr.c`](https://github.com/your_username/your_repo/blob/main/ft_putstr.c) - Outputs a string to the standard output.
- [`ft_putstr_until.c`](https://github.com/your_username/your_repo/blob/main/ft_putstr_until.c) - Outputs a string until a specified character.
- [`ft_putnbr_base.c`](https://github.com/your_username/your_repo/blob/main/ft_putnbr_base.c) - Outputs a number in the specified base format.
- [`ft_putptr.c`](https://github.com/your_username/your_repo/blob/main/ft_putptr.c) - Outputs a pointer’s address in hexadecimal format.
- [`ft_len_n.c`](https://github.com/your_username/your_repo/blob/main/ft_len_n.c) - Calculates the length of an integer in characters.

### Header File
- [`ft_printf.h`](https://github.com/your_username/your_repo/blob/main/ft_printf.h) - Header file declaring all functions and includes necessary libraries.

---

## Instructions

To compile the library, navigate to the project directory and execute the following command in your terminal:

```bash
make



DeepAI
AI Chat
AI Image Generator
AI Video
AI Music Generator
Login

Free ChatGPT
Looking for something similar to ChatGPT from OpenAI? Try Free ChatGPT! Note that Free ChatGPT has no affiliation with OpenAI. ChatGPT is a trademark of OpenAI.
 ✏️ ft_printf

Because putnbr and putstr aren’t enough

GitHub code size in bytes Number of lines of code Code language count GitHub top language GitHub last commit
About · Usage · Testing
💡 About the project

    This project is pretty straight forward. You will recode printf. You will mainly learn how to use variadic arguments.

This project consists of coding a library that contains a simplified version (more
information below) of the printf function.

For more detailed information, look at the subject of this project.
🛠️ Usage
Requirements

The function is written in C language and thus needs the gcc compiler and some standard C libraries to run.
Instructions

1. Compiling the library

To compile, go to the library path and run:

$ make

2. Using it in your code

To use the library functions in your code, simply include its header:

#include "ft_printf.h"

📋 Testing

You can use this third party tester to fully test the project:

    Tripouille/printfTester

fais moi un read me en anglais pour mon projet que je vais mettre sur github, sachant que jai un makefile un fichier .h, et 9 fichier .c , change un peu le texte que je tai donnee
ft_printf

A Simplified Version of printf
📦 About the Project

The ft_printf project is aimed at recreating a simplified version of the standard printf function found in C libraries. This exercise provides a hands-on way to deepen your understanding of variadic functions and enhance your C programming skills. 
Project Structure

    Makefile: Easily compile the library.
    Header File: ft_printf.h to declare the library functions.
    Source Files: Nine .c files containing the functionality behind the ft_printf implementation.

🛠️ Getting Started
Requirements

The library is developed in C and requires the GCC compiler along with standard C libraries for proper functionality.
Compiling the Library

To compile the library, navigate to the project directory and run the following command:

      

make

    

This command will compile the source files and create the necessary object files.
Using the Library

To incorporate ft_printf functions into your code, simply include the header file at the beginning of your C file:

      

#include "ft_printf.h"

    

You can then utilize the ft_printf function as you would with the standard printf.
📋 Testing

To ensure the functionality of your implementation, you can utilize a third-party testing tool. The recommended tester for this project is:

    Tripouille/printfTester

Feel free to use it to thoroughly validate your library.
🤝 Contributions

Contributions are welcome! If you have suggestions or enhancements, please open an issue or submit a pull request.

Thank you for checking out the ft_printf project! Happy coding!
# libft

## 42 Project

This repository contains all the files for the libft project within the main curriculum of 42 Paris. It is a custom library of useful functions in the C programming language. The repository includes the `Makefile` and the `libft.h` header file.

---

## About

This project is a C library of useful functions that can be reused in future projects within the 42 school curriculum. Access to this library will make the coding process for upcoming projects more efficient. The goal of rewriting these functions is to better understand them and to acquire a broad range of tools for future projects. You can find more information in the [subject here](https://www.42paris.com/).

As stated in the subject, all files are located in the same directory.

The code in this repository follows the [Norminette](https://github.com/42School/norminette) rules.

---

## Index

### Functions from the `<ctype.h>` library
- [`ft_isascii`](https://github.com/yassn0/my_libft/blob/main/ft_isascii.c) - Checks if a character is a 7-bit ASCII character.
- [`ft_isalpha`](https://github.com/yassn0/my_libft/blob/main/ft_isalpha.c) - Checks if a character is alphabetic.
- [`ft_isdigit`](https://github.com/yassn0/my_libft/blob/main/ft_isdigit.c) - Checks if a character is a decimal digit.
- [`ft_isalnum`](https://github.com/yassn0/my_libft/blob/main/ft_isalnum.c) - Checks if a character is alphanumeric.
- [`ft_isprint`](https://github.com/yassn0/my_libft/blob/main/ft_isprint.c) - Checks if a character is printable, including a space.
- [`ft_tolower`](https://github.com/yassn0/my_libft/blob/main/ft_tolower.c) - Converts a character to lowercase.
- [`ft_toupper`](https://github.com/yassn0/my_libft/blob/main/ft_toupper.c) - Converts a character to uppercase.

### Functions from the `<stdlib.h>` library
- [`ft_atoi`](https://github.com/yassn0/my_libft/blob/main/ft_atoi.c) - Converts an ASCII string to an integer.
- [`ft_calloc`](https://github.com/yassn0/my_libft/blob/main/ft_calloc.c) - Allocates space for an array and initializes it to 0.

### Functions from the `<strings.h>` library
- [`ft_bzero`](https://github.com/yassn0/my_libft/blob/main/ft_bzero.c) - Fills the first few bytes of an object with zeros.
- [`ft_memset`](https://github.com/yassn0/my_libft/blob/main/ft_memset.c) - Fills memory with a given value.
- [`ft_memchr`](https://github.com/yassn0/my_libft/blob/main/ft_memchr.c) - Finds the first occurrence of a character in a buffer.
- [`ft_memcmp`](https://github.com/yassn0/my_libft/blob/main/ft_memcmp.c) - Compares the bytes in two buffers.
- [`ft_memmove`](https://github.com/yassn0/my_libft/blob/main/ft_memmove.c) - Copies bytes from one buffer to another, handling overlapping memory correctly.
- [`ft_memcpy`](https://github.com/yassn0/my_libft/blob/main/ft_memcpy.c) - Copies bytes from one buffer to another.

### Functions from the `<string.h>` library
- [`ft_strlen`](https://github.com/yassn0/my_libft/blob/main/ft_strlen.c) - Gets the length of a string.
- [`ft_strchr`](https://github.com/yassn0/my_libft/blob/main/ft_strchr.c) - Finds the first occurrence of a character in a string.
- [`ft_strrchr`](https://github.com/yassn0/my_libft/blob/main/ft_strrchr.c) - Finds the last occurrence of a character in a string.
- [`ft_strnstr`](https://github.com/yassn0/my_libft/blob/main/ft_strnstr.c) - Locates a substring within a string.
- [`ft_strncmp`](https://github.com/yassn0/my_libft/blob/main/ft_strncmp.c) - Compares two strings up to a specified length.
- [`ft_strdup`](https://github.com/yassn0/my_libft/blob/main/ft_strdup.c) - Creates a duplicate of a string using malloc.
- [`ft_strlcpy`](https://github.com/yassn0/my_libft/blob/main/ft_strlcpy.c) - Copies a string with a maximum size.
- [`ft_strlcat`](https://github.com/yassn0/my_libft/blob/main/ft_strlcat.c) - Concatenates a string with a maximum size.

### Non-standard functions
- [`ft_itoa`](https://github.com/yassn0/my_libft/blob/main/ft_itoa.c) - Converts an integer to an ASCII string.
- [`ft_substr`](https://github.com/yassn0/my_libft/blob/main/ft_substr.c) - Gets a substring from a string.
- [`ft_strtrim`](https://github.com/yassn0/my_libft/blob/main/ft_strtrim.c) - Removes specified characters from the start and end of a string.
- [`ft_strjoin`](https://github.com/yassn0/my_libft/blob/main/ft_strjoin.c) - Concatenates two strings into a new string using calloc.
- [`ft_split`](https://github.com/yassn0/my_libft/blob/main/ft_split.c) - Splits a string using a specified delimiter character.
- [`ft_strmapi`](https://github.com/yassn0/my_libft/blob/main/ft_strmapi.c) - Creates a new string modified by a given function.
- [`ft_striteri`](https://github.com/yassn0/my_libft/blob/main/ft_striteri.c) - Modifies a string using a given function.
- [`ft_putchar_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putchar_fd.c) - Outputs a character to a given file descriptor.
- [`ft_putstr_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putstr_fd.c) - Outputs a string to a given file descriptor.
- [`ft_putendl_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putendl_fd.c) - Outputs a string to a given file descriptor followed by a newline.
- [`ft_putnbr_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putnbr_fd.c) - Outputs an integer to a given file descriptor.

### Linked list functions (bonus)
- [`ft_lstnew_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstnew_bonus.c) - Creates a new list.
- [`ft_lstsize_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstsize_bonus.c) - Counts the elements in a list.
- [`ft_lstlast_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstlast_bonus.c) - Finds the last element in a list.
- [`ft_lstadd_back_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstadd_back_bonus.c) - Adds a new element to the end of the list.
- [`ft_lstadd_front_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstadd_front_bonus.c) - Adds a new element to the front of the list.
- [`ft_lstdelone_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstdelone_bonus.c) - Deletes an element from the list.
- [`ft_lstclear_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstclear_bonus.c) - Deletes a sequence of elements from a list starting from a specified point.
- [`ft_lstiter_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstiter_bonus.c) - Applies a function to the content of all elements in a list.
- [`ft_lstmap_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstmap_bonus.c) - Applies a function to the content of all elements in a list.

---

## Instructions

To compile the library, run the `Makefile` in the terminal:

```bash
make

    

To clean up object files, run:

      

make clean

    

To remove all generated files, run:

      

make fclean

    

To recompile the library and the test executable, run:

      

make re

    

Tests

Non-automated tests are recommended. You can use the provided main.c file in this repository to test the various functions you have implemented.
License

This project is subject to the 42 school license. Make sure to follow the school's rules when using this code.


fais pareil sur ce modele
libft
42 Project

This repository contains all the files for the libft project, part of the core curriculum at 42 Paris. It's a custom library of useful functions designed for the C programming language. The repository includes the Makefile and the libft.h header file.
About

The libft project is a comprehensive C library that consists of several utility functions which can be reused in future projects throughout the 42 school curriculum. By developing this library, you'll gain in-depth knowledge of the underlying functions and acquire a versatile set of tools to streamline your coding process in subsequent projects. More detailed information can be found in the project subject here.

All files and implementations are organized within the same directory. The code adheres to the Norminette coding style guidelines.
Index
Functions from the <ctype.h> library

    ft_isascii - Verifies if a character is a valid 7-bit ASCII character.
    ft_isalpha - Checks whether a character is alphabetic.
    ft_isdigit - Determines if a character is a decimal digit.
    ft_isalnum - Checks if a character is alphanumeric.
    ft_isprint - Verifies if a character is printable, including a space.
    ft_tolower - Converts a character to its lowercase form.
    ft_toupper - Converts a character to its uppercase form.

Functions from the <stdlib.h> library

    ft_atoi - Converts an ASCII string into an integer.
    ft_calloc - Allocates memory for an array and initializes all bytes to zero.

Functions from the <strings.h> library

    ft_bzero - Sets a certain number of bytes of an object to zero.
    ft_memset - Fills a block of memory with a specified value.
    ft_memchr - Locates the first occurrence of a character in a block of memory.
    ft_memcmp - Compares the contents of two memory blocks.
    ft_memmove - Safely copies memory, even if the source and destination overlap.
    ft_memcpy - Copies memory area from one location to another.

Functions from the <string.h> library

    ft_strlen - Computes the length of a string.
    ft_strchr - Finds the first occurrence of a character in a string.
    ft_strrchr - Finds the last occurrence of a character in a string.
    ft_strnstr - Searches for a substring within a string.
    ft_strncmp - Compares two strings up to a specified length.
    ft_strdup - Duplicates a string using dynamic memory allocation.
    ft_strlcpy - Copies a string with a limit on the number of characters.
    ft_strlcat - Concatenates two strings with a size limit.

Non-standard functions

    ft_itoa - Converts an integer into an ASCII string representation.
    ft_substr - Extracts a substring from a string.
    ft_strtrim - Removes specified characters from both ends of a string.
    ft_strjoin - Combines two strings into a new dynamically allocated string.
    ft_split - Divides a string into substrings using a specified delimiter.
    ft_strmapi - Creates a new string by applying a function to each character of the original string.
    ft_striteri - Applies a function to each character of a string.
    ft_putchar_fd - Writes a character to a specified file descriptor.
    ft_putstr_fd - Writes a string to a specified file descriptor.
    ft_putendl_fd - Writes a string to a specified file descriptor followed by a newline.
    ft_putnbr_fd - Writes an integer to a specified file descriptor.

Linked List Functions (Bonus)

    ft_lstnew_bonus - Creates a new linked list node.
    ft_lstsize_bonus - Counts the number of elements in a linked list.
    ft_lstlast_bonus - Returns the last node in a linked list.
    ft_lstadd_back_bonus - Adds a new node to the end of a linked list.
    ft_lstadd_front_bonus - Adds a new node to the front of a linked list.
    ft_lstdelone_bonus - Deletes a node from a linked list.
    ft_lstclear_bonus - Clears a portion of a linked list starting from a specific node.
    ft_lstiter_bonus - Applies a function to the data of each node in a linked list.
    ft_lstmap_bonus - Maps function to each element of the list, creating a new list with modified content.

Instructions

To compile the library, execute the following command in your terminal:

      

make

    

To clean up the object files, use:

      

make clean

    

To remove all generated files, run:

      

make fclean

    

To recompile both the library and any test executables, execute:

      

make re

    

Testing

It is recommended to conduct non-automated testing. You can use the provided main.c file in this repository to test the various functions you have implemented.
License

This project is governed by the 42 school license. Please ensure compliance with school rules when using this code.
# libft

## 42 Project

This repository contains all the files for the libft project within the main curriculum of 42 Paris. It is a custom library of useful functions in the C programming language. The repository includes the `Makefile` and the `libft.h` header file.

---

## About

This project is a C library of useful functions that can be reused in future projects within the 42 school curriculum. Access to this library will make the coding process for upcoming projects more efficient. The goal of rewriting these functions is to better understand them and to acquire a broad range of tools for future projects. You can find more information in the [subject here](https://www.42paris.com/).

As stated in the subject, all files are located in the same directory.

The code in this repository follows the [Norminette](https://github.com/42School/norminette) rules.

---

## Index

### Functions from the `<ctype.h>` library
- [`ft_isascii`](https://github.com/yassn0/my_libft/blob/main/ft_isascii.c) - Checks if a character is a 7-bit ASCII character.
- [`ft_isalpha`](https://github.com/yassn0/my_libft/blob/main/ft_isalpha.c) - Checks if a character is alphabetic.
- [`ft_isdigit`](https://github.com/yassn0/my_libft/blob/main/ft_isdigit.c) - Checks if a character is a decimal digit.
- [`ft_isalnum`](https://github.com/yassn0/my_libft/blob/main/ft_isalnum.c) - Checks if a character is alphanumeric.
- [`ft_isprint`](https://github.com/yassn0/my_libft/blob/main/ft_isprint.c) - Checks if a character is printable, including a space.
- [`ft_tolower`](https://github.com/yassn0/my_libft/blob/main/ft_tolower.c) - Converts a character to lowercase.
- [`ft_toupper`](https://github.com/yassn0/my_libft/blob/main/ft_toupper.c) - Converts a character to uppercase.

### Functions from the `<stdlib.h>` library
- [`ft_atoi`](https://github.com/yassn0/my_libft/blob/main/ft_atoi.c) - Converts an ASCII string to an integer.
- [`ft_calloc`](https://github.com/yassn0/my_libft/blob/main/ft_calloc.c) - Allocates space for an array and initializes it to 0.

### Functions from the `<strings.h>` library
- [`ft_bzero`](https://github.com/yassn0/my_libft/blob/main/ft_bzero.c) - Fills the first few bytes of an object with zeros.
- [`ft_memset`](https://github.com/yassn0/my_libft/blob/main/ft_memset.c) - Fills memory with a given value.
- [`ft_memchr`](https://github.com/yassn0/my_libft/blob/main/ft_memchr.c) - Finds the first occurrence of a character in a buffer.
- [`ft_memcmp`](https://github.com/yassn0/my_libft/blob/main/ft_memcmp.c) - Compares the bytes in two buffers.
- [`ft_memmove`](https://github.com/yassn0/my_libft/blob/main/ft_memmove.c) - Copies bytes from one buffer to another, handling overlapping memory correctly.
- [`ft_memcpy`](https://github.com/yassn0/my_libft/blob/main/ft_memcpy.c) - Copies bytes from one buffer to another.

### Functions from the `<string.h>` library
- [`ft_strlen`](https://github.com/yassn0/my_libft/blob/main/ft_strlen.c) - Gets the length of a string.
- [`ft_strchr`](https://github.com/yassn0/my_libft/blob/main/ft_strchr.c) - Finds the first occurrence of a character in a string.
- [`ft_strrchr`](https://github.com/yassn0/my_libft/blob/main/ft_strrchr.c) - Finds the last occurrence of a character in a string.
- [`ft_strnstr`](https://github.com/yassn0/my_libft/blob/main/ft_strnstr.c) - Locates a substring within a string.
- [`ft_strncmp`](https://github.com/yassn0/my_libft/blob/main/ft_strncmp.c) - Compares two strings up to a specified length.
- [`ft_strdup`](https://github.com/yassn0/my_libft/blob/main/ft_strdup.c) - Creates a duplicate of a string using malloc.
- [`ft_strlcpy`](https://github.com/yassn0/my_libft/blob/main/ft_strlcpy.c) - Copies a string with a maximum size.
- [`ft_strlcat`](https://github.com/yassn0/my_libft/blob/main/ft_strlcat.c) - Concatenates a string with a maximum size.

### Non-standard functions
- [`ft_itoa`](https://github.com/yassn0/my_libft/blob/main/ft_itoa.c) - Converts an integer to an ASCII string.
- [`ft_substr`](https://github.com/yassn0/my_libft/blob/main/ft_substr.c) - Gets a substring from a string.
- [`ft_strtrim`](https://github.com/yassn0/my_libft/blob/main/ft_strtrim.c) - Removes specified characters from the start and end of a string.
- [`ft_strjoin`](https://github.com/yassn0/my_libft/blob/main/ft_strjoin.c) - Concatenates two strings into a new string using calloc.
- [`ft_split`](https://github.com/yassn0/my_libft/blob/main/ft_split.c) - Splits a string using a specified delimiter character.
- [`ft_strmapi`](https://github.com/yassn0/my_libft/blob/main/ft_strmapi.c) - Creates a new string modified by a given function.
- [`ft_striteri`](https://github.com/yassn0/my_libft/blob/main/ft_striteri.c) - Modifies a string using a given function.
- [`ft_putchar_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putchar_fd.c) - Outputs a character to a given file descriptor.
- [`ft_putstr_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putstr_fd.c) - Outputs a string to a given file descriptor.
- [`ft_putendl_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putendl_fd.c) - Outputs a string to a given file descriptor followed by a newline.
- [`ft_putnbr_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putnbr_fd.c) - Outputs an integer to a given file descriptor.

### Linked list functions (bonus)
- [`ft_lstnew_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstnew_bonus.c) - Creates a new list.
- [`ft_lstsize_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstsize_bonus.c) - Counts the elements in a list.
- [`ft_lstlast_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstlast_bonus.c) - Finds the last element in a list.
- [`ft_lstadd_back_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstadd_back_bonus.c) - Adds a new element to the end of the list.
- [`ft_lstadd_front_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstadd_front_bonus.c) - Adds a new element to the front of the list.
- [`ft_lstdelone_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstdelone_bonus.c) - Deletes an element from the list.
- [`ft_lstclear_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstclear_bonus.c) - Deletes a sequence of elements from a list starting from a specified point.
- [`ft_lstiter_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstiter_bonus.c) - Applies a function to the content of all elements in a list.
- [`ft_lstmap_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstmap_bonus.c) - Applies a function to the content of all elements in a list.

fais pareil pour mon projet printf, sachant que jai un fichier ces fichiers : ft_len_n.c    ft_putint.c       ft_putstr.c
ft_printf.c   ft_putnbr_base.c  ft_putstr_until.c
ft_printf.h   ft_putnbr.c       ft_putui.c
ft_putchar.c  ft_putptr.c       Makefile
ft_printf
42 Project

This repository contains all the files for the ft_printf project, part of the curriculum at 42. It is a custom implementation of the printf function in the C programming language. The repository includes the Makefile and the ft_printf.h header file.
About

The ft_printf project aims to create a simplified version of the standard printf function. This library can be reused in future projects within the 42 school curriculum, making the coding process more efficient and fun. By coding this library, you will gain a deeper understanding of variadic arguments and formatting while expanding your toolset for upcoming projects. For more detailed information, you can refer to the project subject here.

All files and implementations are located in the same directory. The code follows the Norminette style guidelines.
Index
Core Functions

    ft_printf.c - The main function that processes the format string and calls the appropriate output functions.
    ft_putint.c - Outputs an integer to the standard output.
    ft_putnbr.c - Outputs an integer number recursively, handling negative signs.
    ft_putui.c - Outputs an unsigned integer.
    ft_putchar.c - Outputs a single character to the standard output.
    ft_putstr.c - Outputs a string to the standard output.
    ft_putstr_until.c - Outputs a string until a specified character.
    ft_putnbr_base.c - Outputs a number in the specified base format.
    ft_putptr.c - Outputs a pointer's address in a hexadecimal format.
    ft_len_n.c - Calculates the length of an integer in characters.

Header File

    ft_printf.h - Header file declaring all functions and includes necessary libraries.

Instructions

To compile the library, navigate to the project directory and execute the following command in your terminal:

      

make

    

To clean up the object files, use:

      

make clean

    

To remove all generated files, run:

      

make fclean

    

To rebuild the library and any test executables, use:

      

make re

    

Testing

For testing purposes, it is recommended to use non-automated tests. You can create a main.c file in the repository to validate the various functions you have implemented.
License

This project is under the 42 school license. Please ensure to comply with the school's rules when utilizing this code. 

Thank you for checking out the ft_printf project! Happy coding!
fais moi le read me

Sure! Here is a complete README.md for your ft_printf project:

      

# ft_printf

## 42 Project

This repository contains all the files for the **ft_printf** project, part of the curriculum at 42. It is a custom implementation of the `printf` function in the C programming language. The repository includes the `Makefile` and the `ft_printf.h` header file.

---

## About

The **ft_printf** project aims to create a simplified version of the standard `printf` function. This library can be reused in future projects within the 42 school curriculum, making the coding process more efficient and enjoyable. By coding this library, you will gain a deeper understanding of variadic arguments and formatting while expanding your toolset for upcoming projects. For more detailed information, you can refer to the [project subject here](https://www.42paris.com/).

All files and implementations are located in the same directory. The code follows the [Norminette](https://github.com/42School/norminette) style guidelines.

---

## Index

### Core Functions
- [`ft_printf.c`](https://github.com/your_username/your_repo/blob/main/ft_printf.c) - The main function that processes the format string and calls the appropriate output functions.
- [`ft_putint.c`](https://github.com/your_username/your_repo/blob/main/ft_putint.c) - Outputs an integer to the standard output.
- [`ft_putnbr.c`](https://github.com/your_username/your_repo/blob/main/ft_putnbr.c) - Outputs an integer number recursively, handling negative signs.
- [`ft_putui.c`](https://github.com/your_username/your_repo/blob/main/ft_putui.c) - Outputs an unsigned integer.
- [`ft_putchar.c`](https://github.com/your_username/your_repo/blob/main/ft_putchar.c) - Outputs a single character to the standard output.
- [`ft_putstr.c`](https://github.com/your_username/your_repo/blob/main/ft_putstr.c) - Outputs a string to the standard output.
- [`ft_putstr_until.c`](https://github.com/your_username/your_repo/blob/main/ft_putstr_until.c) - Outputs a string until a specified character.
- [`ft_putnbr_base.c`](https://github.com/your_username/your_repo/blob/main/ft_putnbr_base.c) - Outputs a number in the specified base format.
- [`ft_putptr.c`](https://github.com/your_username/your_repo/blob/main/ft_putptr.c) - Outputs a pointer’s address in hexadecimal format.
- [`ft_len_n.c`](https://github.com/your_username/your_repo/blob/main/ft_len_n.c) - Calculates the length of an integer in characters.

### Header File
- [`ft_printf.h`](https://github.com/your_username/your_repo/blob/main/ft_printf.h) - Header file declaring all functions and includes necessary libraries.

---

## Instructions

To compile the library, navigate to the project directory and execute the following command in your terminal:

```bash
make

    

To clean up the object files, use:

      

make clean

    

To remove all generated files, run:

      

make fclean

    

To rebuild the library and any test executables, use:

      

make re

    

Testing

For testing purposes, it is recommended to use non-automated tests. You can create a main.c file in the repository to validate the various functions you have implemented.
License

This project is under the 42 school license. Please ensure to comply with the school's rules when utilizing this code.

Thank you for checking out the ft_printf project! Happy coding!

      


Feel free to customize the links or any specific details as needed!

    

AD
```bash
make

fais la suite dachant que jai un clean fclean et re

Sure! Here’s how you can extend the README.md with the specific make command instructions, including the clean, fclean, and re targets:

      

## Instructions

To compile the library, navigate to the project directory and execute the following command in your terminal:

```bash
make

    

This command will compile all the source files and create the executable.
Cleanup Commands

    To remove the object files and other temporary files generated during the compilation, use:

      

make clean

    

    To remove all the object files and the executable file, run:

      

make fclean

    

This command is useful to ensure a completely clean slate before a fresh build.

    To rebuild the library and any test executables after cleaning, use:

      

make re

    

This command will first execute make fclean followed by make, effectively rebuilding the project from scratch.
Testing

For testing purposes, it is recommended to use non-automated tests. You can create a main.c file in the repository to validate the various functions you have implemented.
License

This project is under the 42 school license. Please ensure to comply with the school's rules when utilizing this code.

Thank you for checking out the ft_printf project! Happy coding!

      


### Summary of Changes
- Added descriptions for `make clean`, `make fclean`, and `make re` commands, explaining what each command does and how they help manage the build process.

Feel free to adjust any wording or formatting as per your preferences!

    

fais moi le read me pour que je le copie colle

Bien sûr ! Voici le contenu du README.md que vous pouvez copier-coller directement :

      

# ft_printf

## 42 Project

This repository contains all the files for the **ft_printf** project, part of the curriculum at 42. It is a custom implementation of the `printf` function in the C programming language. The repository includes the `Makefile` and the `ft_printf.h` header file.

---

## About

The **ft_printf** project aims to create a simplified version of the standard `printf` function. This library can be reused in future projects within the 42 school curriculum, making the coding process more efficient and enjoyable. By coding this library, you will gain a deeper understanding of variadic arguments and formatting while expanding your toolset for upcoming projects. For more detailed information, you can refer to the [project subject here](https://www.42paris.com/).

All files and implementations are located in the same directory. The code follows the [Norminette](https://github.com/42School/norminette) style guidelines.

---

## Index

### Core Functions
- [`ft_printf.c`](https://github.com/your_username/your_repo/blob/main/ft_printf.c) - The main function that processes the format string and calls the appropriate output functions.
- [`ft_putint.c`](https://github.com/your_username/your_repo/blob/main/ft_putint.c) - Outputs an integer to the standard output.
- [`ft_putnbr.c`](https://github.com/your_username/your_repo/blob/main/ft_putnbr.c) - Outputs an integer number recursively, handling negative signs.
- [`ft_putui.c`](https://github.com/your_username/your_repo/blob/main/ft_putui.c) - Outputs an unsigned integer.
- [`ft_putchar.c`](https://github.com/your_username/your_repo/blob/main/ft_putchar.c) - Outputs a single character to the standard output.
- [`ft_putstr.c`](https://github.com/your_username/your_repo/blob/main/ft_putstr.c) - Outputs a string to the standard output.
- [`ft_putstr_until.c`](https://github.com/your_username/your_repo/blob/main/ft_putstr_until.c) - Outputs a string until a specified character.
- [`ft_putnbr_base.c`](https://github.com/your_username/your_repo/blob/main/ft_putnbr_base.c) - Outputs a number in the specified base format.
- [`ft_putptr.c`](https://github.com/your_username/your_repo/blob/main/ft_putptr.c) - Outputs a pointer’s address in hexadecimal format.
- [`ft_len_n.c`](https://github.com/your_username/your_repo/blob/main/ft_len_n.c) - Calculates the length of an integer in characters.

### Header File
- [`ft_printf.h`](https://github.com/your_username/your_repo/blob/main/ft_printf.h) - Header file declaring all functions and includes necessary libraries.

---

## Instructions

To compile the library, navigate to the project directory and execute the following command in your terminal:

```bash
This command will compile all the source files and create the executable.

make


Cleanup Commands:

To remove the object files and other temporary files generated during the compilation, use:

make clean

To remove all the object files and the executable file, run:

make fclean

To rebuild the library and any test executables after cleaning, use:

make re
