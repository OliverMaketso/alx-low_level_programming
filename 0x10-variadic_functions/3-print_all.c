#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print values of various data types based on the format
 * @format: A string containing format specifiers
 */

void print_all(const char * const format, ...)
{
va_list args;
char *separator = "";
unsigned int i = 0;

va_start(args, format);

while (format && format[i])
{
if (i > 0)
separator = ", ";

switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, (float)va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
}
}

i++;
}

va_end(args);

printf("\n");
}

