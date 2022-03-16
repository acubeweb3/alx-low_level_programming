#include <stdio.h>
/**
 * main - main block
 * Description: Write a program that prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c[8] = "_putchar";

	int n = 0;

	while (n < 8)
	{
		_putchar(c[n]);

		n++;
	}
	_putchar('\n');
	return (0);
}
