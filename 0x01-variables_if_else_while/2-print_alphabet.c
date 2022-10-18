#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print out the alphabets
 * Retrun: 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
