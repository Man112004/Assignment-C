#include <stdio.h>

int main() {
    int minutes[7] = {0};
    int choice;
    int i;

    do {
        printf("\nMusic Listening Logger\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (i = 0; i < 7; i++) {
                printf("Day %d minutes: ", i + 1);
                scanf("%d", &minutes[i]);
            }
        }
        else if (choice == 2) {
            for (i = 0; i < 7; i++) {
                printf("Day %d: %d minutes\n", i + 1, minutes[i]);
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