#include <stdio.h>
#include <ctype.h>

void getUserInitials(char name[], char initials[]) {
    int j = 0;

    initials[j++] = toupper(name[0]);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            initials[j++] = toupper(name[i + 1]);
        }
    }

    initials[j] = '\0';
}

int main() {
    char name[] = "Virat Kohli";
    char initials[10];

    getUserInitials(name, initials);

    printf("Initials %s\n", initials);

    return 0;
}