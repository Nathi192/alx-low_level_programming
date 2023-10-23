#include <stdio.h>


/**
 * main - program that prints all single digit numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '10'; num++)

	{
	if (num != '5' && num != '9')
	putchar(num);
	}

	putchar('\n');

	return (0);
}
