#include <stdio.h>

/**
 * print_menu - Displays the calculator menu
 */
void print_menu(void)
{
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
}

/**
 * calculate - Performs arithmetic operations
 * @choice: Selected operation
 * @a: First number
 * @b: Second number
 */
void calculate(int choice, double a, double b)
{
	switch (choice)
	{
		case 1:
			printf("Result: %g\n", a + b);
			break;
		case 2:
			printf("Result: %g\n", a - b);
			break;
		case 3:
			printf("Result: %g\n", a * b);
			break;
		case 4:
			if (b == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %g\n", a / b);
			break;
	}
}

/**
 * main - Runs the simple calculator
 *
 * Return: 0 on success, 1 on input error
 */
int main(void)
{
	int choice;
	double a, b;

	printf("Simple Calculator\n");

	while (1)
	{
		print_menu();

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choice < 1 || choice > 4)
		{
			printf("Invalid choice\n");
			continue;
		}

		printf("A: ");
		if (scanf("%lf", &a) != 1)
			return (1);

		printf("B: ");
		if (scanf("%lf", &b) != 1)
			return (1);

		calculate(choice, a, b);
	}

	return (0);
}
