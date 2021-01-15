#include <stdio.h>

/*
// write a program to find the sum of N numbers.
int main()
{
	int n, sum=0;
	printf("Howmany numbers are there ? : ");
	scanf("%d",&n);
	for (int i = n; i>0; i--){
		sum+=i;
	}
	printf("%d\n", sum);
	return 0;
}
*/

/*
// write a program to find sum of n odd numbers.
int main()
{
	int n, sum=0;
	printf("Howmany numbers are there ? : ");
	scanf("%d",&n);
	for (int i = n; i>0; i--){
		if(i%2==0)
		sum+=i;
	}
	printf("%d\n", sum);
	return 0;
}
*/

// write a program to find the average of n numbers.
int main()
{
	int n, sum=0, average=0;
	printf("Howmany numbers are there ? : ");
	scanf("%d",&n);
	for(int i=0; i<=n; i++){
		sum+=i;
		average=sum/n;
	}
	// printf("The sum is %d\n",sum);
	// printf("And the average is %d/%d = %d\n",sum,n,average);
	return 0;
}