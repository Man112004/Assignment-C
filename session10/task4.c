#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char username[6];

    printf("Enter your full name: ");
    scanf("%s", name);

    if (strlen(name) <= 5) {
        strcpy(username, name);
    } else {
        for (int i = 0; i < 5; i++) {
            username[i] = name[i];
        }
        username[5] = '\0';
    }

    printf("Generated Username: %s\n", username);

    return 0;
}