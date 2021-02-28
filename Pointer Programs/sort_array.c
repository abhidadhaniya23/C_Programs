#include <stdio.h>

void input(int *p);
void display(int *p);
void sort(int *p);


int main()
{
	int arr[5];
	input(arr);
	display(arr);
	sort(arr);
	printf("\nYour sorted array is...\n");
	display(arr);
	return 0;
}

void input(int *p) {
	printf("\nEnter 5 numbers for your array...\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", p + i);
	}
}

void display(int *p) {
	printf("\nYour array is...\n");
	for (int i = 0; i < 5; i++) {
		printf("%d, ", *(p + i));
	}
}

void sort(int *p) {
	int round, i, t;
	for (round = 1; round < 5; round++) {
		for (i = 0; i < 4; i++) {
			if (*(p + i) > *(p + i + 1)) {
				t = *(p + i);
				*(p + i) = *(p + i + 1);
				*(p + i + 1) = t;
			}
		}
	}
}