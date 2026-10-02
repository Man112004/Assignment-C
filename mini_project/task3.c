#include <stdio.h>

int main() {
    int minutes[7];
    int i;
    FILE *file;

    file = fopen("music_log.txt", "w");

    if (file == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    for (i = 0; i < 7; i++) {
        printf("Enter minutes for Day %d: ", i + 1);
        scanf("%d", &minutes[i]);

        fprintf(file, "%d\n", minutes[i]);
    }

    fclose(file);

    printf("Data saved to music_log.txt\n");

    return 0;
}