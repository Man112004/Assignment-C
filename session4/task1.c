#include <stdio.h>

int calculateTotal(int itemPrice, int quantity) {
    return itemPrice * quantity;
}

int main() {
    int itemPrice = 500;
    int quantity = 3;

    int total = calculateTotal(itemPrice, quantity);

    printf("Total Bill = %d\n", total);

    return 0;
}