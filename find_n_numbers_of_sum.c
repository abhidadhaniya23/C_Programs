#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=0,n, sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("The sum of 0 to %d is %d.\n",n,sum);
	return 0;
}