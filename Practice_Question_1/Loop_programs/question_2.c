#include <stdio.h>

// write a program to print number from 1 to n in reverse...

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n>0){
		printf("%d\n",n);
		n--;
	}
	return 0;
}