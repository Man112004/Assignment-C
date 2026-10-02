#include <stdio.h>

int main() {
    float price = 2000;
    float discountpercent = 10;
    int isMember = 1;

    float discount = price * discountpercent / 100;
    float finalPrice = price - discount;

    if (isMember == 1) {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }
    else {
        finalPrice = finalPrice;
    }

    printf("Original Price = %.2f\n", price);
    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}