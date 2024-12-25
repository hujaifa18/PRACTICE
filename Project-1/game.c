#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int no_of_guesses = 0;
    int guessed;
    int randomNumber = (rand() % 100) + 1;

    do
    {
        printf("Guess the number : ");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower please\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher please\n");
        }
        else
        {
            printf("Congrat's! \n");
        }
        no_of_guesses++;
    } while (guessed != randomNumber);
    printf("You guess the number in %d guesses", no_of_guesses);
    return 0;
}