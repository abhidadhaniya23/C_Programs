#include <stdio.h>

int main()
{

	int arr[5] = {45, 132, 12, 90, 2};
	int min_number;

	min_number = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] < min_number) {
			min_number = arr[i];
		}
	}
	printf("Min. number is %d\n", min_number);

	return 0;
}