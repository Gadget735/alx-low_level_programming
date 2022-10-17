#include <stdio.h>
/**
*main - Print alphabets in lowercase except q and e, followed by a new line.
*
*Return: 0 if success
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);

}
