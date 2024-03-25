// C program to generate 10 random number using rand()
// function
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // use time.h header file to use time

int main()
{
    time_t t1; // declare time variable
    srand((unsigned)time(&t1));
    /*
        using
            srand((unsigned)time(&t1));
        is same as dynamically setting seed value (i.e input from the user)

        printf("Enter a num");
        int value;
        scanf("%d", &value);
        srand((unsigned)value);

        this is because time() gives current time, so every time the program runs the time()->output is different
        basically we can get the same result by changing the seed every time (i.e input from the user)

    */
    // Loop through 10 times

    int value = (rand() % 150) + 1, guess;

    while (1)

    {   printf("%d\n",value);
        printf("Guess A number between [0-150]\n");
        printf("Enter your guess :");
        scanf("%d", &guess);
        if (guess > value)
        {
            printf("\nHigh\n");
        }
        else if (guess < value)
        {
            printf("Low\n");
        }
        else if (guess == value)
        {
            printf("choosen value is %d\nYou Won !", value);
            break;
        }
    }

    return 0;
}
