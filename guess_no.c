#include <stdio.h>
#include <stdlib.h>
#include <time.h>   
int main() {
    int random, guess;
    int guess_count = 0;
    srand(time(NULL));
    printf("Welcome to the Number Guessing Game!\n");
    random = rand() % 100 + 1;

    do {
        printf("\n Enter your guess between 1 and 100: ");
        scanf("%d", &guess);
        guess_count++;

        if (guess < random)
        {
            printf("Too low! Try again.\n");
        } else if (guess > random) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed it right in %d attempts.\n", guess_count);
        }
        
    } while (guess != random);
    {
        printf("thank you for playing!\n");
        printf("developed by Mohit\n");
    }
    
}
