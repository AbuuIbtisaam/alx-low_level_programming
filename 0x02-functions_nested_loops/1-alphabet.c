#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char lower_letter;

	for (lower_letter = 'a'; lower_letter <= 'z'; lower_letter++)
		_putchar(lower_letter);

	_putchar('\n');
}
