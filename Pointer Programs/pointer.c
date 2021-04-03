#include <stdio.h>

int main()
{
	int arr[3]={90,83,23};
	for (int i = 0; i < 3; i++) {
		printf("%d", &(arr + i));
		// printf("%d",&arr[i])
	}
	// printf("your ans is : \n");
	// for(int i=0;i<10;i++){
	// 	printf("%d\n",*&arr[i]);
	// }
	// int *x;
	// printf("%d\n",&x);
	return 0;
}