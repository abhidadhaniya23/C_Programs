main()
{
    int correct_number = 7, n_of_try = 3;
    printf("Quess any number from 0 to 9\n");
    int n;
    do
    {
        printf(" now n is : %d", n);
        scanf("%d\n", &n);
        if (n == correct_number)
        {
            // printf("You Won !\n");
        }
    } while (n != correct_number);
}