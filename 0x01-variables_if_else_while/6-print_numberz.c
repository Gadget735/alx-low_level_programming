#include <stdio.h>
/**
*main - Print all single digit numbers of base 10 from 0, followed by new line.
*
*Return: 0 sucess
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
