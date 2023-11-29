#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - prints char
 * @args: argument
 *
 * Return: nothing
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
}
