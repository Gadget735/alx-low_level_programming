#include <stdio.h>
/**
*main - Prints alphabets in lower case, and then in uppercase
*
*Return: 0 if success
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
