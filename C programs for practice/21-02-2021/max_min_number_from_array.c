#include <stdio.h>

// write a program to find the sum of elements of array...

#define sizeof_array 5

int main()
{
	int arr[sizeof_array];

	printf("Enter %d elements for array...\n",sizeof_array);

	for (int i = 0; i < sizeof_array; i++) {
		scanf("%d", &arr[i]);
	}
	int max_number, min_number;

	max_number = arr[0];
	min_number = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max_number) {
			max_number = arr[i];
		}
		if (arr[i] < min_number) {
			min_number = arr[i];
		}
	}
	printf("Max. number is %d\n", max_number);
	printf("Min. number is %d\n", min_number);

	return 0;
}