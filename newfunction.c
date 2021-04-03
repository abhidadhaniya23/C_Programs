#include <stdio.h>
#include <conio.h>

int add(int, int);

int main() {
	int a, b, c;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);

	// here is the real use of return...
	// when we use return at add function then its return x+y value for use in another function...
	c = add(a, b);
	printf("Ans is %d\n", c);
	return 0;
}

int add(int x, int y) {

	printf("Abhi\n");
	
	return (x + y);
}