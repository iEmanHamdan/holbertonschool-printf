# holbertonschool-printf

## Description
This project is a custom implementation of the standard C library function `printf`. The function `_printf` writes output to stdout, the standard output stream, according to a specific format. It was developed as part of the Software Engineering curriculum at **Holberton School / Tuwaiq Academy**.

## Authors
* **Eman Hamdan** - [iEmanHamdan](https://github.com/iEmanHamdan)
* **Areej Alghamdi**  [Areej-Alghamdi](https://github.com/Areej-Alghamdi)

## Technologies
* Language: C
* Compiler: gcc 9.4.0
* Operating System: Ubuntu 20.04 LTS
* Style: Betty

## Prototype
`int _printf(const char *format, ...);`

## Supported Conversion Specifiers
| Specifier | Description |
| :---: | :--- |
| **%c** | Prints a single character. |
| **%s** | Prints a string of characters. |
| **%d** | Prints a signed integer in decimal notation. |
| **%i** | Prints a signed integer (same as %d). |
| **%%** | Prints a literal percent sign. |

## Return Value
Upon success, `_printf` returns the number of characters printed (excluding the null byte used to end output to strings). If an error occurs, the function returns -1.

## Usage
To use this function, include the header file `main.h` in your source code.

```c
#include "main.h"

int main(void)
{
    _printf("Hello, Holberton!\n");
    _printf("Character: %c\n", 'H');
    _printf("Integer: %d\n", 1024);
    return (0);
}
