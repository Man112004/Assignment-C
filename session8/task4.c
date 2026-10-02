#include <stdio.h>

char* formatPrice(int price) {
    static char result[20];

    if (price >= 1000) {
        sprintf(result, "%d,%d", price / 1000, price % 1000);
    } else {
        sprintf(result, "%d", price);
    }

    return result;
}

int main() {
    printf("Laptop %s\n", formatPrice(1599));
    printf("Mobile %s\n", formatPrice(24999));
    printf("Mouse %s\n", formatPrice(499));

    return 0;
}