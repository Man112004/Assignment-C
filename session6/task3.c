#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char songs[3][30] = {
        "Kesariya",
        "Tum Hi Ho",
        "Apna Bana Le"
    };

    char guess[30];
    int n;

    srand(time(NULL));
    n = rand() % 3;

    do {
        printf("Guess the song: ");
        scanf(" %[^\n]", guess);

        if(strcmp(guess, songs[n]) == 0)
            printf("Correct!\n");
        else
            printf("Wrong! Try again.\n");

    } while(strcmp(guess, songs[n]) != 0);

    return 0;
}