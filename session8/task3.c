#include <stdio.h>

void increaseFollowersByValue(int followers) {
    followers = followers + 1000;
}

void increaseFollowersByReference(int *followers) {
    *followers = *followers + 1000;
}

int main() {
    int followers = 5000;

    increaseFollowersByValue(followers);

    printf("After pass by value %d\n", followers);

    increaseFollowersByReference(&followers);

    printf("After pass by reference %d\n", followers);

    return 0;
}