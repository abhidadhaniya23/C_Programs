#include <stdio.h>

int main()
{
	int number;
	int num1, num2, num3;
	printf("Enter 3 degit number : ");
	scanf("%d", &number);
	if (number > 99 && number < 1000) {
		// printf("%d\n",number%100);
		num3 = (number % 100) % 10;
		num2 = (number % 100) / 10;
		num1 = (number - (number % 100)) / 100;
		// printf("%d\n", num1);
		// printf("%d\n", num2);
		// printf("%d\n", num3);

		if ((num1 * num1 * num1) + (num2 * num2 * num2) + (num3 * num3 * num3) == number) {
			printf("Your number %d is armstrong number.\n", number);
		}
		else {
			printf("Your number %d is not armstrong number.\n", number);
		}
	}
	else {
		printf("Invalid Number... \nPlease Enter a number between 100 to 999...\n");
	}
	return 0;
}