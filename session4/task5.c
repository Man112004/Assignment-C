#include <stdio.h>

int main() {
    int Count = 100;

    printf("Before: %d\n", Count);

    printf("Pre-increment: %d\n", ++Count);
    printf("After pre-increment: %d\n", Count);

    Count = 100;

    printf("\nBefore: %d\n", Count);

    printf("Post-increment: %d\n", Count++);
    printf("After post-increment: %d\n", Count);

    return 0;
}