#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - Struct for specifiers
 * @type: The character (c, s, d, i)
 * @f: The function associated
 */
typedef struct format
{
	char *type;
	int (*f)(va_list);
} fmt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);

#endif
