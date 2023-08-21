#include "main.h"

/**
 * _printf -  produces output according to a format.
 * @format: is a character string
 * Return: character.
 */

int _printf(const char *format, ...)
{
	int _printf(const char *format, ...)
{
	va_list args;
	int chars = 0;
	int x, y;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'd' )
			{
				x = va_arg(args, int);
		                printf("%d", x);
                		chars += printf(NULL, 0, "%d", x);
			}

			else if (*format == 'i')
			{
				y = va_arg(args, int);
				printf("%i", y);
				chars += printf(NULL, 0, "%i", y);
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
