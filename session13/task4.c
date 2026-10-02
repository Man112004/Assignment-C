#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *file;
    char song[100];

    file = fopen("playlist.txt", "r");

    while (fgets(song, sizeof(song), file) != NULL) {

        for (int i = 0; song[i] != '\0'; i++) {
            song[i] = tolower(song[i]);
        }

        if (strstr(song, "love") != NULL) {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}