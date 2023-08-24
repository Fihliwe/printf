#include "main.h"
/**
 * _printf - function for printf
 * @format: format.
 * Return: count.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int chars = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == ' ')
				return (-1);

			if (*format == 'c')
				convert_char(args, &chars);

			else if (*format == 's')
				convert_string(args, &chars);

			else if (*format == '%')
				convert_percent(&chars);

			else if (*format == 'd' || *format == 'i')
				convert_decimal(args, &chars);

			else if (*format == 'b')
				convert_binary(args, &chars);

			else if (*format == 'u')
				convert_unsigned(args, &chars);

			else if (*format == 'o')
				convert_octal(args, &chars);

			else if (*format == 'x' || *format == 'X')
				convert_hex(args, &chars, (*format == 'X') ? 1 : 0);
			
			else if (*format == 'p')
				convert_address(args, &chars);

			else
				convert_unknown(*format, &chars);
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
