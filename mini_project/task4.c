#include <stdio.h>

int main() {
    FILE *file;
    int minutes;
    int total = 0;
    int highest = 0;
    int count = 0;
    float average;

    file = fopen("music_log.txt", "r");

    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fscanf(file, "%d", &minutes) == 1) {
        total += minutes;

        if (minutes > highest) {
            highest = minutes;
        }

        count++;
    }

    fclose(file);

    if (count > 0) {
        average = (float)total / count;

        printf("Total: %d minutes\n", total);
        printf("Average: %.2f minutes\n", average);
        printf("Highest: %d minutes\n", highest);
    }

    return 0;
}