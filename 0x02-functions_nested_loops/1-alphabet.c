#include "main.h"

/**
*print_alphabet - prints all the alphabet in lowercase, followed by a new line.
*
*Return: 0 success
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
