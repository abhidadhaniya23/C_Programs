#include <stdio.h>

#define sizeof_array 5

int main()
{
	int arr[sizeof_array];
	int min_number;

	printf("Enter %d elements for array...\n", sizeof_array);

	for (int i = 0; i < sizeof_array; i++) {
		scanf("%d", &arr[i]);
	}

	min_number = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] < min_number) {
			min_number = arr[i];
		}
	}
	printf("Min. number is %d\n", min_number);

	return 0;
}