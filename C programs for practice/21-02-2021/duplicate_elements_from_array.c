#include <stdio.h>

// write a program to count a total number of duplicate elements in an array...

#define sizeof_array 5
// enter any number insted of 5...
// if you want to store more numbers in array...

int main()
{

	int arr[sizeof_array];

	printf("Enter your elements for perticular array...\n");

	for (int i = 0; i < sizeof_array; i++) {
		scanf("%d", &arr[i]);
	}

	// int arr[10] = {20, 30, 10, 34, 54, 32, 12, 20, 10, 20};
	// just declare any array for check directly...

	// declare that variable for check the size of your array...
	int sizeof_arr = sizeof(arr) / sizeof(int);

	// declare variable 'number' for check that perticular number of array...
	// declare variable 'ntimes' for check that number howmany times repete...
	int number, ntimes = 0;

	printf("\nWhich numbre's dublicate did you want to find it? : ");
	scanf("%d", &number);
	for (int i = 0; i < sizeof_arr; i++) {
		if (arr[i] == number) {
			// ntimes = ntimes + 1;
			ntimes++;
		}
	}

	// if that number didn't exitst in your array then...
	if (ntimes == 0) {
		printf("You entered wronge number from your array, try to correct it...\n");
	}

	// print final result...
	printf("There are %d duplicate of %d in your array.\n", ntimes, number);

	return 0;
}