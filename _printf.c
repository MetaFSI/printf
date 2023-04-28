#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_int - Prints an integer from a va_list
 * @args: The va_list containing the integer to be printed
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
int num = va_arg(args, int);
int count = 0;

if (num < 0)
{
_putchar('-');
num *= -1;
count++;
}

int temp = num, digits = 0;
while (temp != 0)
{
temp /= 10;
digits++;
}

char buffer[digits];
for (int i = digits - 1; i >= 0; i--)
{
buffer[i] = (num % 10) + '0';
num /= 10;
}

for (int i = 0; i < digits; i++)
{
_putchar(buffer[i]);
count++;
}

return (count);
}

/**
 * print_char - Prints a character from a va_list
 * @args: The va_list containing a character to print
 *
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - Prints a string from a va_list
 * @args: The va_list containing a string to print
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_percent - Prints a percent sign
 * @args: The va_list (unused)
 *
 * Return: The number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

/**
 * _printf - A simple implementation of printf
 * @format: The format string
 *
 * Return: The number of characters printed
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
					count += print_char(args);
					break;
				case 's':
					count += print_string(args);
					break;
				case '%':
					count += print_percent(args);
					break;
				case 'd':
				case 'i':
					count += print_int(args);
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
