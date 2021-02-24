/*
   1
  2 3
 4 5 6
7 8 9 10
*/

#include <stdio.h>

	int main()
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = i; j < 5; j++)
			{
				printf(" ");
			}
			for (int k = 1; k <= i; k++)
			{
				printf("%d",k);
			} for (int l = 0; l <= i - 2; l++)
			{
				printf("%d",l);
			}
			printf("\n");
		}
		return 0;
	}