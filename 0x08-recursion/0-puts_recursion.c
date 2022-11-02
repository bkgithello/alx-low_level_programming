#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: string
 *
 * Return: On Success 1.
 * On error, -1 is returned, and error set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
