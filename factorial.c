#include <stdio.h>

int main()
{
    int i, n, ans = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        ans *= i;
    }
    printf("Ans is : %d\n", ans);

    return 0;
}