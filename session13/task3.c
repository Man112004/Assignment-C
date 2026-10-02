#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("playlist.txt", "a");

    fprintf(file, "Shape of You\n");
    fprintf(file, "My Love\n");

    fclose(file);

    printf("2 songs added successfully.");

    return 0;
}