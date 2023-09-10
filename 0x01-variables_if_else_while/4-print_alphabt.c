#include <stdio.h>
/**
 * main - entery point
 *
 * Return: Return 0 for success
 */
int main(void)
{
	int cha;

	cha = 'a';
	while (cha <= 'z')
	{
		if (cha != 'e' && cha != 'q')
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
