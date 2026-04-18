#include "main.h"
#include <stdarg.h> 

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	while (format[i])
	{
	if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(args);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == 'd' || format[i] == 'i') /* <-- ADD THIS */
				count += print_int(args);                  /* <-- ADD THIS */
			else if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == '\0')
				return (-1);
			else 
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

