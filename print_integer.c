#include "main.h"

/**
 * print_integer - prints an integer
 * @args: va_list containing the int argument
 *
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
	long n;
	int is_negative;
	char buffer[11];
	int index;
	int count;

	n = va_arg(args, int);
	index = 10;
	is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	if (n == 0)
	{
		buffer[index] = '0';
		index--;
	}

	while (n != 0)
	{
		buffer[index] = (n % 10) + '0';
		n /= 10;
		index--;
	}

	if (is_negative == 1)
	{
		buffer[index] = '-';
		index--;
	}

	count = 10 - index;
	write(1, &buffer[index + 1], count);

	return (count);
}