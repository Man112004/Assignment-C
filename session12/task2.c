#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem items[3] = {
        {"Paneer Pizza", 299.00, 4.5},
        {"Pav Bhaji", 199.00, 4.3},
        {"Masala Dosa", 120.00, 4.6}
    };

    for (int i = 0; i < 3; i++) {
        printf("Item: %s\n", items[i].itemName);
        printf("Price: %.2f\n", items[i].price);
        printf("Rating: %.1f\n\n", items[i].rating);
    }

    return 0;
}