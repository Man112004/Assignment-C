#include <stdio.h>
#include <string.h>

void addToCart(char cart[][20], int *count, char product[]) {
    strcpy(cart[*count], product);
    (*count)++;

    printf("Updated Cart \n");

    for (int i = 0; i < *count; i++) {
        printf("%s\n", cart[i]);
    }
}

int main() {
    char cart[10][20];
    int count = 0;

    addToCart(cart, &count, "Laptop");

    printf("\nAfter function call \n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", cart[i]);
    }

    return 0;
}