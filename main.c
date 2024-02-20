#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define the range for the number (adjust as needed)
#define MIN_RANGE 1
#define MAX_RANGE 100

// Function to generate a random number within the specified range
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to get the player's guess
int getPlayerGuess() {
    int guess;
    printf("Enter your guess (%d-%d): ", MIN_RANGE, MAX_RANGE);
    scanf("%d", &guess);
    return guess;
}

// Function to provide feedback based on the player's guess
void provideFeedback(int target, int guess) {
    if (guess > target) {
        printf("Too high! Try again.\n");
    } else if (guess < target) {
        printf("Too low! Try again.\n");
    } else {
        printf("Congratulations! You guessed the number!\n");
    }
}

//Function to ask if the player ask to play again
int playAgain(){
char choice;
printf("Do you want to play again?(y/n):");
scanf("%c",choice);
return(choice=='y'||choice=='Y');
}

int main() {
    int target, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number within the specified range
    target = generateRandomNumber(MIN_RANGE, MAX_RANGE);

    printf("Welcome to the Number Guessing Game!\n\n");

    do {
        // Get the player's guess
        guess = getPlayerGuess();
        attempts++;

        // Provide feedback based on the guess
        provideFeedback(target, guess);

    } while (guess != target);

    printf("You guessed the number in %d attempts.\n", attempts);
    return 0;
}
