#include <stdio.h>

int main() {
    int choice;

    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Try Masala Dosa\n");
            break;
        case 2:
            printf("Try Gujarati Thali\n");
            break;
        case 3:
            printf("Try Pizza\n");
            break;
        case 4:
            printf("Try Samosa\n");
            break;
        default:
            printf("Try some fruits\n");
    }

    return 0;
}