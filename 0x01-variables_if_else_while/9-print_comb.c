#include <stdio.h>

/**
 * main - prints all possible combination  of a single-digit numbers
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
