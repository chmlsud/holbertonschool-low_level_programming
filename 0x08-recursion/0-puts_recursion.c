#include "holberton.h"
/**
 * _puts_recursion - This is the recursion function
 * @s: This is a pointer of the char string
 * Return: Return value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
