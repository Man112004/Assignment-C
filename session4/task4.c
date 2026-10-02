#include <stdio.h>

int main() {
    int likes = 1500;
    int comments = 150;
    int shares = 40;


    printf("Trending: %s\n", (likes >= 1000) || (comments > 200 && shares >= 50) ? "true" : "false");

    return 0;
}