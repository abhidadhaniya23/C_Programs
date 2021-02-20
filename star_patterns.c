#include <stdio.h>

/*
// *
// **
// ***
// ****
// *****
int main()
{
	int i,j;
	for (int i = 1; i <=5; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*
// *****
// ****
// ***
// **
// *
int main()
{
	int i,j;
	for (int i = 1; i<=5; i++)
	{
		for (int j = 5; j>=i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*
//     *
//    **
//   ***
//  ****
// *****
int main()
{
	int i,j,k;
	for (int i = 1; i <=5; i++)
		{
			for (int j = i; j <5; j++)
			{
				printf(" ");
			}
			for (int k = 1; k <=i; k++)
			{
				printf("*");
			}
			printf("\n");
		}
	return 0;
}
*/

/*
// *****
//  ****
//   ***
//    **
//     *
int main()
{
	for (int i = 1; i <=5; i++)
	{
		for (int j=2; j<=i; j++)
		{
			printf(" ");
		}
		for(int k=5; k>=i; k--){
			printf("*");
			// printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
//     *
//    ***
//   *****
//  *******
// *********
int main()
{
	for (int i = 1; i <=5; i++)
		{
			for (int j = i; j <5; j++)
			{
				printf(" ");
			}
			for (int k = 1; k <=i; k++)
			{
				printf("*");
			}for (int l = 0; l <=i-2; l++)
			{
				printf("*");
			}
			printf("\n");
		}
	return 0;
}
*/

/*
// 1
// 01
// 101
// 0101
// 10101
int main()
{
	for (int i = 1; i <=5; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			if((i-j)%2==1)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	return 0;
}
*/


// AAAAA
// BBBB
// CCC
// DD
// E
/*
int main()
{
	// int i,j;
	for (int i = 1; i<=5; i++)
	{
		for (int j = 5; j>=i; j--)
		{
			printf("%c",(char)(i+64));
		}
		printf("\n");
	}
	return 0;
}

*/


/*

// 12345
//  2345
//   345
//    45
//     5

int main()
{

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (int k = i; k <= 5; k++) {
			printf("%d", k);
		}
		printf("\n");
	}
	return 0;
}
*/



/*

// 54321
//  4321
//   321
//    21
//     1

int main()
{
	for (int i = 1; i <=5; i++)
	{
		for (int j=2; j<=i; j++)
		{
			printf(" ");
		}
		for(int k=5; k>=i; k--){
			// printf("*");
			printf("%d",k-i+1);
		}
		printf("\n");
	}
	return 0;
}
*/

