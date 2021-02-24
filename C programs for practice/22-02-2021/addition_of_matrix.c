#include <stdio.h>

#define size 2

int main()
{
	int matrix1[size][size], matrix2[size][size], ans[size][size];
	printf("Enter first matrix...\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("\nEnter second matrix...\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			scanf("%d", &matrix2[i][j]);
		}
	}

	printf("\nEnter second matrix...\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			ans[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("Your ans of matrix : a%d%d %d\n",i,j,ans[i][j]);
		}
	}

	return 0;
}