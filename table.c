#include <stdio.h>
main()
{
    int given_number, i;
    printf("Enter a number to print its table : ");
    scanf("%d", &given_number);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", given_number, i, i * given_number);
    }
}