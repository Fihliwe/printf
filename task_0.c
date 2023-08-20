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

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'c')
			{
				x = (char)va_arg(args, int);
				putchar(x);
				chars++;
			}

			else if (*format == 's')
			{
				strr = va_arg(args, char *);
				while (*strr)
				{
					printf(*strr);
					strr++;
					chars++;
				}
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
				chars += 2;
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
