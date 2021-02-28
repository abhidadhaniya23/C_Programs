#include <stdio.h>

int main()
{
	int x = 5;
	int *y = &x;
	printf("%d\n", &x);
	printf("%d\n", *&y);
	return 0;
}

// get value to address then use &
// get address to value then use *