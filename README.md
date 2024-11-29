# _printf : A Clone of printf

This project aims to recreate the standard `printf` function in C. Developed in collaboration with **Nail Slimani**, **Ali Mejnoun**, and **Stan Queuniez**, this project demonstrates our deep understanding of advanced C programming concepts.

---

## Description

The `_printf` function produces formatted output to the standard output, following the specifiers defined in a format string. Like the standard `printf` function, `_printf` supports several format types such as:
- `%c`: Prints a character.
- `%s`: Prints a string.
- `%d` and `%i`: Print an integer in decimal base.
- `%u`: Prints an unsigned integer.
- `%o`: Prints an integer in octal base.
- `%x` and `%X`: Print an integer in hexadecimal base (lowercase and uppercase respectively).
- `%%`: Prints a `%` character.

### Key Features

1. **Error Handling**: If the format is `NULL`, the function returns `-1`.
2. **Function Return**: `_printf` returns the total number of characters printed, excluding the null character.
3. **Extended Specifiers**: In addition to the classic types (`%c`, `%s`, `%d`, etc.), `_printf` supports memory addresses via `%p`.

---

## Code Functionality

The code is divided into several modules, each with a specific role.

### Modules and Responsibilities

- **Stan Queuniez**
	- `print_char`: Prints a character passed as an argument.
	- `print_string`: Prints a string, or "(null)" if the string is empty.
	- `handle_format`: Manages the different format specifiers and calls the associated functions.
	- `_printf`: Main entry point to parse the format string and direct execution to the appropriate functions.
- **Ali Mejnoun**
	- `print_integer_recursive`: Prints integers recursively to handle negative and multiple-digit cases.
	- Manages formats `%d`, `%i`, `%u`, `%o`, `%x`, `%X` for decimal, integer, unsigned, octal, and hexadecimal integers.
- **Nail Slimani**
	- User Manual (`man_3_printf.man`): Detailed documentation on the use of `_printf`, with practical examples and error case explanations.

---

## Included Files

Here is the list of essential files for the project:
- **`main.c`**: Main file containing tests demonstrating the capabilities of `_printf`.
- **`main.h`**: Header file containing function prototypes.
- **`printf_task_0.c`**: Implementation of the `_printf` function and associated modules.
- **`print_integer_recursive.c`**: Integer handling (Ali).
- **`print_unsigned_recursive.c`**: Unsigned integer handling (Ali).
- **`man_3_printf.man`**: Manual describing the functionality of `_printf` (Nail).
- **`author`**: Author contact information (Nail).

---

## Usage Example

Here is an example of using `_printf`:
```c
#include "main.h"
int main(void)
{
	int len;
	char *str = "Holberton";
	len = _printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", str);
	_printf("Percent:[%%]\n");
	_printf("Integer:[%d]\n", 42);
	_printf("Unsigned:[%u]\n", 1024);
	_printf("Hexadecimal:[%x, %X]\n", 255, 255);
	return (0);
}
```

## Expected Results

```
Character:[H]
String:[Holberton]
Percent:[%]
Integer:[42]
Unsigned:[1024]
Hexadecimal:[ff, FF]
```
## Flowchart

![Flowchart](https://github.com/Amedjnoun/holbertonschool-printf/blob/Dev/Flowchart.png)
## Authors

Nail Slimani
Ali Mejnoun
Stan Queuniez