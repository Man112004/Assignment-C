#include <stdio.h>

int main() {
    char productName[] = "Laptop";
    float price = 55000.50f;
    double rating = 4.5;

    printf("Product Name: %s - Data Type: char[]\n", productName);
    printf("Price: %.2f - Data Type: float\n", price);
    printf("Rating: %.4f - Data Type: double\n", rating);

    return 0;
}