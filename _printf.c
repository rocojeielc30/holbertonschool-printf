#include "main.h"

/**
 * _printf - produces output according to a format, similar to printf
 * @format: character string containing directives to be formatted
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int count;
	va_list args;


	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == 's')
				{
					count += print_string(args);
					i++;
				}
				else if (format[i + 1] == '%')
				{
					count += print_percent(args);
					i++;
				}
				else if (format[i + 1] == 'c')
				{
					count += print_char(args);
					i++;
				}
				else if (format[i + 1] == '\0')
				{
					break;
				}
				else
				{
					write(1, &format[i], 1);
					write(1, &format[i + 1], 1);
					count += 2;
					i++;

				}
			}
			else
			{
				write(1, &format[i], 1);
				count++;
			}
			i++;
		}
	va_end(args);
	return (count);
}
