#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */