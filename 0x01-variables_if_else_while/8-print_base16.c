#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
