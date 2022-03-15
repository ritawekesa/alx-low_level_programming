#include "main.h"

/**
 * print_alphabet -function prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
