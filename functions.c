#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints a single character.
 * @args: The argument list.
 * Return: Always 1.
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a full string.
 * @args: The argument list.
 * Return: Number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_int - Prints an integer for %d and %i specifiers.
 * @args: The argument list.
 * Return: Number of characters printed.
 */
int print_int(va_list args)
{
	long int n = va_arg(args, int);
	int count = 0;
	long int div = 1, temp;

	/* Handle negative numbers */
	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	/* Find the divisor to extract the first digit */
	temp = n;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	/* Extract and print digits one by one */
	while (div >= 1)
	{
		count += _putchar(((n / div) % 10) + '0');
		div /= 10;
	}

	return (count);
}