#include <stdio.h>

int main()
{
    char str1[50];
    int i = 0;

       printf("\n\nFind the length of a string:\n ");
 
    printf("Input a string : ");
    scanf("%s", str1);
 
    while(str1[i]!='\0')
    {
        i++;
    }
    printf("the length of the string %s is : %d\n\n", str1, i);

    return 0;
}