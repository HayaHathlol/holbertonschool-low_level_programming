#include <stdio.h>

/**
 * main - Simple calculator with addition
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	int choice, a, b;

	printf("Simple Calculator\n");

	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choice == 1)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				return (1);

			printf("B: ");
			if (scanf("%d", &b) != 1)
				return (1);

			printf("Result: %d\n", a + b);
		}
		else if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
	}

	return (0);
}
