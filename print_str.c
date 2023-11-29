#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_str - prints string
 * @args: argument
 *
 * Return: nothing
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
