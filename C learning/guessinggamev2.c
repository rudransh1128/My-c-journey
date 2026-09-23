//Number guessing game v2(More coming soon)

#include <stdio.h>
#include <stdlib.h>   // Used for rand()
#include <time.h>     // Used for time(NULL)

int main() {

    int numa, numg;

    // Using the current time as the seed gives a different random sequence each run.
    srand(time(NULL));

    // Generates a random number between 1 and 100.
    numa = rand() % 100 + 1;

    printf("\n===== NUMBER GUESSING GAME =====\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("Enter your guess: ");

    scanf("%d", &numg);

    // The loop continues until the user's guess matches the random number.
    while (numa != numg) {

        // If the guess is too high, ask the user to guess lower.
        if (numa < numg)
            printf("Too high! Try a lower number: ");

        // If the guess is too low, ask the user to guess higher.
        else if (numa > numg)
            printf("Too low! Try a higher number: ");

        scanf("%d", &numg);
    }

    printf("\nCorrect! You guessed the number!\n");

    return 0;
}