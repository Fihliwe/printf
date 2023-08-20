#include "main.h"

/**
 * _printf -  produces output according to a format.
 * @format: is a character string
 * Return: character.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int chars = 0;
	char x;
	char *strr;

	va_start(args, *format);

	while (*format)
	{
		if (*format == '\0')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'c')
			{
				x = va_arg(args, int);
				putchar(c);
				chars++;
			}

			else if (*format == 's')
			{
				strr = va_arg(args, char *);
				putchar(*strr);
				strr++;
				chars++;
			}

			else if (*format == '%')
			{
				putchar('%');
				chars++;
			}

			else 
			{
				putchar('%');
				putchar(*format);
				chars++;
			}

		}
		else
		{
			putchar(*format);
			chars++;
		}

		format++;

	}

	va_end(args);

	return (chars);

}
