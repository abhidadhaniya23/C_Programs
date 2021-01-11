#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guessNum, nguesses = 0;
    srand(time(0));
    number = rand();
    number = number % 100 + 1;
    // printf("Random number is %d\n", number);
    do{
        printf("Quass the number : ");
        scanf("%d", &guessNum);
        // printf("you guassed %d\n", number);
        if (number > guessNum)
        {
            printf("Higher number please !\n");
        }
        else if (number < guessNum)
        {
            printf("Lower number please !\n");
        }
        else
        {
            printf("You won this game by %d attemped.", nguesses);
}
        nguesses++;
    } while (number != guessNum);

    return 0;
}
