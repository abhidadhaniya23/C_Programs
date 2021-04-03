#include <stdio.h>

int checking();

int main(){

	int n = 0;
	for (int i = 0; i < 1000; i++) {
		printf("\n----------------\n");
		printf("Enter numbers for %d time...\n",i+1);
		checking();
		n++;
	}

	return 0;
}

int checking() {
	int arr[4];
	int n = 0;
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		printf("Enter %d numbers : ",i+1);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 4; i++) {
		sum = sum + arr[i];
	}
	if (sum == 14) {
		// printf("Its %d\n", n);
		printf("\nIts sum is 14...\n");
	}
	return 0;
}