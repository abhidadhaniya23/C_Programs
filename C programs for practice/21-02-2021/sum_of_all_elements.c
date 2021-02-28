#include <stdio.h>

// write a program to find the sum of elements of array...

#define sizeof_array 5

int main()
{
	int sum = 0;
	int arr[sizeof_array];

	printf("Enter %d elements for array...\n",sizeof_array);

	for (int i = 0; i < sizeof_array; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < sizeof_array; i++) {
		sum += arr[i];
	}

	printf("\nThe sum of array's elements is %d\n",sum);
	return 0;
}