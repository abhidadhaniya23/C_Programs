#include <stdio.h>

// write a c program for reverse an array...

#define sizeof_array 5

int main()
{
	int arr[sizeof_array];

	printf("Enter elements for array...\n");

	for (int i = 0; i < sizeof_array; i++) {
		scanf("%d", &arr[i]);
	}
	printf("The reverse array is\n");
	for (int i = 4; i >= 0; i--) {
		printf("%d\n", arr[i]);
	}
	return 0;
}