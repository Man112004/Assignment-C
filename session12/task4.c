#include <stdio.h>

struct InstaProfile {
    char username[50];
    int followers;

    struct Bio {
        char description[100];
        int age;
    } bio;
};

int main() {
    struct InstaProfile profile = {
        "man_popaliya",
        1500,
        {"Computer Engineering Student", 22}
    };

    printf("Username %s\n", profile.username);
    printf("Followers %d\n", profile.followers);
    printf("Description %s\n", profile.bio.description);
    printf("Age %d\n", profile.bio.age);

    return 0;
}