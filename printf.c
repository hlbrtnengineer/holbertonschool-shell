#include <stdarg.h>
#include "main.h"
#include <unistd.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_char(args);
					count++;
					break;
				case 's':
					print_str(&count, args);
					break;
				default:
					write(1, "%", 1);
					write(1, format, 1);
					count += 2;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
