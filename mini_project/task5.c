#include <stdio.h>

int main() {
    int minutes[7] = {0};
    int choice;
    int i;
    char confirm;
    FILE *file;

    file = fopen("music_log.txt", "r");

    if (file != NULL) {
        for (i = 0; i < 7; i++) {
            fscanf(file, "%d", &minutes[i]);
        }
        fclose(file);
    }

    do {
        printf("\nMusic Listening Logger\n");
        printf("1. View Data\n");
        printf("2. Reset Data\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (i = 0; i < 7; i++) {
                printf("Day %d: %d minutes\n", i + 1, minutes[i]);
            }
        }

        else if (choice == 2) {
            printf("Are you sure you want to reset data? (Y/N): ");
            scanf(" %c", &confirm);

            if (confirm == 'Y' || confirm == 'y') {

                for (i = 0; i < 7; i++) {
                    minutes[i] = 0;
                }

                file = fopen("music_log.txt", "w");

                if (file != NULL) {
                    fclose(file);
                }

                printf("Data reset successfully.\n");
            }
            else {
                printf("Reset cancelled.\n");
            }
        }

        else if (choice == 3) {
            printf("Exit\n");
        }

        else {
            printf("Invalid choice\n");
        }

    } while (choice != 3);

    return 0;
}