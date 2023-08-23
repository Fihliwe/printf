#include "main.h"
/**
 * conert_point - function for the p specifier
 * @format: character string
 * Return: chars
*/

int convert_point(const char *format, ...)
{
	va_list args;
	int chars = 0;

	void *addr;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			
			if (*format == '\0')
				break;
            
			else if (*format == 'p')
			{
				addr = va_arg(args, void *);
				chars += printf("%p", addr);
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

	return chars;
}
