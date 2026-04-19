# holberton-printf

## Description
This project is a custom implementation of the standard C library function `printf`. The function `_printf` writes output to stdout (the standard output stream) based on a format string. This implementation uses a string parsing engine with conditional branching to handle specific conversion specifiers, delegating the output logic to modular helper functions. 

It was developed by **Eman Hamdan** and **Areej Alghamdi** as part of the Software Engineering curriculum at **Holberton School / Tuwaiq Academy**.

## Learning Objectives
This project demonstrates proficiency in the following C programming concepts:
* **Variadic Functions:** Utilizing `stdarg.h` macros (`va_list`, `va_start`, `va_arg`, `va_end`) to handle an unknown, variable number of arguments.
* **String Parsing:** Implementing algorithms to iterate through strings, identify trigger characters (`%`), and handle edge cases (like trailing percentage signs).
* **Memory & Output Control:** Using the `write` system call via a custom `_putchar` wrapper to manually manage character-by-character output without relying on standard library I/O functions.
* **Modularity:** Defining functional structures and separating specifier logic (e.g., `print_int`, `print_string`) into distinct files for cleaner code management.

## Requirements
* **Environment:** All files compiled on Ubuntu 20.04 LTS.
* **Compiler:** `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* **Style:** Code formatted in strict adherence to the **Betty** style guide.
* **Constraints:** No global variables used. No more than 5 functions per file.

## Conversion Specifiers
Our `_printf` function handles the following conversion specifiers:

| Specifier | Description | Helper Function |
| :---: | :--- | :--- |
| **`%c`** | Prints a single character. | `print_char` |
| **`%s`** | Prints a string of characters. | `print_string` |
| **`%d`** | Prints a signed integer in base 10. | `print_int` |
| **`%i`** | Prints a signed integer in base 10. | `print_int` |
| **`%%`** | Prints a literal percent sign. | Handled in engine |

## Compilation
To compile the library alongside your own `main.c` file, use the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf
````

## Flowchart 
<img width="1956" height="2043" alt="My First Board (2)" src="https://github.com/user-attachments/assets/d385d36b-8506-4758-906d-03b8f2903a88" />


## Usage Example

Include the custom header file in your C programs to use the function:

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s!\n", "World");
    _printf("Printing a character: %c\n", 'H');
    _printf("Score: %d%%\n", 100);
    
    return (0);
}
```

## Testing

This custom function was rigorously tested against the standard C library `printf` to ensure identical standard output and return values (number of characters printed). It includes error handling for `NULL` format strings and incomplete format specifiers.

## Manual Page

Detailed technical documentation is available via the included manual page. To view it, run:

```bash
man ./man_3_printf
```

## Authors
* **Eman Hamdan** - [iEmanHamdan](https://github.com/iEmanHamdan)
* **Areej Alghamdi**  [Areej-Alghamdi](https://github.com/Areej-Alghamdi)

