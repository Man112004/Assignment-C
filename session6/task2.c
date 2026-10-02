#include <stdio.h>

int main() {
    char teams[10][30] = {
        "Mumbai Indians",
        "Chennai Super Kings",
        "RCB"
    };

    int count = 3;
    int choice;
    char team[30];

    while(choice != 3) {

        printf("\n1. View Teams\n");
        printf("2. Add Team\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            for(int i = 0; i < count; i++) {
                printf("%d. %s\n", i + 1, teams[i]);
            }
        }
        else if(choice == 2) {
            printf("Enter team name: ");
            scanf(" %[^\n]", team);

            int i = 0;
            while(team[i] != '\0') {
                teams[count][i] = team[i];
                i++;
            }

            teams[count][i] = '\0';
            count++;

            printf("Team added!\n");
        }
        else if(choice == 3) {
            printf("Exit\n");
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}