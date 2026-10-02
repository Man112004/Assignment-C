#include <stdio.h>

int isEligibleForOffer(int age, float orderValue) {
    if (age >= 18 && orderValue > 500) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int age = 20;
    float orderValue = 800;

    int result = isEligibleForOffer(age, orderValue);

    printf("Eligible for Offer: %s\n", result ? "true" : "false");

    return 0;
}