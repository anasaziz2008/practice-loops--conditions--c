#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // For seeding srand()

#define NUM_STRINGS 3 // Number of strings in the array

int main() {
    // Array of strings
    const char* strings[NUM_STRINGS] = {
        "Rock",
        "Paper",
        "Scissors",
    };

    srand(time(NULL));

    int random_index = rand() % NUM_STRINGS;
    const char* com = strings[random_index];

    // User's choice
    char user[20]; // Assuming max input length of 19 characters + '\0'
    printf("Enter your choice (Rock, Paper, Scissors): ");
    scanf("%19s", user); // Read user input

    // Convert user input to lowercase (optional, for case-insensitive comparison)
    // This assumes you have a function toLower() defined
    // toLower(user);

    // Determine the winner
    // Using a switch statement to compare user's choice with computer's choice
    switch (random_index) {
        case 0: // Computer chose "Rock"
            if (strcmp(user, "Rock") == 0)
                printf("It's a tie!\n");
            else if (strcmp(user, "Paper") == 0)
                printf("You win!\n");
            else if (strcmp(user, "Scissors") == 0)
                printf("Computer wins!\n");
            else
                printf("Invalid input!\n");
            break;

        case 1: // Computer chose "Paper"
            if (strcmp(user, "Rock") == 0)
                printf("Computer wins!\n");
            else if (strcmp(user, "Paper") == 0)
                printf("It's a tie!\n");
            else if (strcmp(user, "Scissors") == 0)
                printf("You win!\n");
            else
                printf("Invalid input!\n");
            break;

        case 2: // Computer chose "Scissors"
            if (strcmp(user, "Rock") == 0)
                printf("You win!\n");
            else if (strcmp(user, "Paper") == 0)
                printf("Computer wins!\n");
            else if (strcmp(user, "Scissors") == 0)
                printf("It's a tie!\n");
            else
                printf("Invalid input!\n");
            break;

        default:
            printf("Invalid input!\n");
            break;
    }

    return 0;
}
