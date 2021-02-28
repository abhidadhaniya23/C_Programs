#include <stdio.h>

#define array_length 10

int check_duplicate(int number);

// int arr[10] = {20, 30, 91, 21, 21, 20, 90, 30, 100, 43};
int arr[10] = {20, 2, 21, 21, 31, 20, 90, 30, 100, 43};

// int ntime=0;

	int ntime, user_number;
int main()
{
	scanf("%d",&user_number);
	// for (int i = 0; i < 10; i++) {
	// 	ntime[i] = 0;
	// }
	// for (int i = 0; i < array_length; i++) {
		check_duplicate(user_number);
	// }
	return 0;
}

int check_duplicate(int number) {
	// printf("%d\n",number);

	for (int i = 0; i < 10; i++) {
		// if (arr[i] == number) {
		// 	ntime[i]++;
		// 	printf("This %d is repete : %d\n",number, ntime[i]);
		// }
		// for (int j = 0; j < 10; j++) {
		// }
		if (arr[i] == user_number) {
			ntime++;
		}
	}
		printf("%d is repet by %d times.\n", number,ntime);
	return 0;
}