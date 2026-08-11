#include "main.h"

/**
 * print_string - prints a string, handling NULL arguments
 * @args: va_list containing the string argument to print
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	int i;
	char *str;


	i = 0;
		str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}
