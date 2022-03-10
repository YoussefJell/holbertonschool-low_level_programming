#include "variadic_functions.h"
/**
 * print_all - prints all parameters
 * @format: format for parameters
 * @...: functions
 * Return: int
 */
void print_all(const char *const format, ...)
{
	va_list args;

	pr_t printer[] = {{"c", print_char},
					  {"s", print_string},
					  {"f", print_float},
					  {"i", print_int}};
	int i, j = 0;

	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *printer[j].type)
			{
				printer[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

void print_string(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
