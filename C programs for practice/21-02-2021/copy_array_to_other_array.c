#include <stdio.h>

// write a program to copy array elements to another array...

#define sizeof_array 5

int main()
{
	int arr1[sizeof_array] = {34, 54, 56, 32, 90};
	int arr2[sizeof_array];
	for(int i=0;i<sizeof_array;i++){
		arr2[i]=arr1[i];
	}
	for(int i=0;i<sizeof_array;i++){
		printf("%d\n",arr2[i]);
	}
	return 0;
}