#include <stdio.h>

int main()
{
	int arr[5] = {32, 35, 12, 4, 33};
	int min_number;

	min_number = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] < min_number) {
			min_number = arr[i];
		}
	}
	printf("%d\n",min_number);
	return 0;
}