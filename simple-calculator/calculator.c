#include <stdio.h>

int main(void)
{
	int choice;

	printf("Welcome to the program!\n");

	do {
		printf("\nMenu:\n");
		printf("1. Option 1\n");
		printf("2. Option 2\n");
		printf("0. Quit\n");
		printf("Enter your choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

	} while (choice != 0);

	printf("Goodbye!\n");

	return (0);
}
