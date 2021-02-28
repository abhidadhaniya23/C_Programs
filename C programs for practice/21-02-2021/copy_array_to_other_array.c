#include <stdio.h>

// write a program to copy array elements to another array...

#define sizeof_array 5
#define sizeof_array 5

int main()
{
	int arr1[sizeof_array];
	int arr2[sizeof_array];

	printf("Enter your elements for first array...\n");

	for (int i = 0; i < sizeof_array; i++) {
		scanf("%d", &arr1[i]);
	}

	for (int i = 0; i < sizeof_array; i++) {
		arr2[i] = arr1[i];
	}
	printf("\nThe copy of first array is...\n");
	for (int i = 0; i < sizeof_array; i++) {
		printf("%d\n", arr2[i]);
	}
	return 0;
}