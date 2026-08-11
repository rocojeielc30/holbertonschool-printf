#include "main.h"

/**
* print_percent - prints a literal percent sign
* @args: unused, kept for a consistent handler signature
*
* Return: number of characters printed
*/
int print_percent(va_list args)
{
  (void)args;
  write(1, "%", 1);

  return (1);
}
