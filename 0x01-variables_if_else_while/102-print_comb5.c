#include <stdio.h>
/**
 * main - create 2 pairs of number
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(' ');
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);

			if (i * 100 + j != 9899)
			{
				putchar(',')

			}
		}
	}
}

