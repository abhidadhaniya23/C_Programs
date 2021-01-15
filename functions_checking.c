#include <stdio.h>

int change(int b);

int main()
{
	int b=40;
	printf("The value of b is %d\n",b);
	change(b);
	change(10);
	printf("The value of b is %d\n",b);
	return 0;
}

int change(int b){
	printf("The value of b is %d\n",b);
	return 0;
}