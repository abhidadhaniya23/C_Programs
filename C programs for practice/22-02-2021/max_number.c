#include <stdio.h>

int main()
{

	int arr[5] = {45, 132, 12, 90, 2};
	int max_number;

	max_number = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max_number) {
			max_number = arr[i];
		}
	}
	printf("Max number is %d\n", max_number);

	return 0;
}