#include"main.h"
/**
 * convert_percent - function for the  %& specifier
 * @count: pointer to char
 */
void convert_percent(int *chars)
{
        putchar('%');
        (*chars)++;
}