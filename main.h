#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/* Function prototypes */

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: The number of characters written
 */
int _putchar(char c);

/**
 * _printf - Produces output according to a format
 * @format: The format string containing the conversion specifiers
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...);

/**
 * print_char - Prints a character from a va_list
 * @args: The va_list containing the character to be printed
 *
 * Return: The number of characters printed
 */
int print_char(va_list args);

/**
 * print_string - Prints a string from a va_list
 * @args: The va_list containing the string to be printed
 *
 * Return: The number of characters printed
 */
int print_string(va_list args);

/**
 * print_percent - Prints a percent sign
 * @args: va_list (unused, but necessary for function pointer compatibility)
 *
 * Return: The number of characters printed
 */
int print_percent(va_list args);

/**
 * print_int - Prints an integer from a va_list
 * @args: The va_list containing the integer to be printed
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args);

#endif /* MAIN_H */
