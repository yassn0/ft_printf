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
