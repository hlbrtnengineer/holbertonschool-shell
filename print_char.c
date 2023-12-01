#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - prints char
 * @args: argument
 * @count: integer
 * Return: nothing
 */

void print_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	(*count)++;
}
