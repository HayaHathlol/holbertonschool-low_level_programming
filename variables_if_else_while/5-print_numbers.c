#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
