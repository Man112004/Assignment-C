#include <stdio.h>

int main() {
    float basePrice = 500.0f;
    const float gstrate = 18.0f;

    float gst = basePrice * gstrate / 100;
    float finalPrice = basePrice + gst;

    printf("Base Price %.2f\n",basePrice);
    printf("GST %.2f\n", gst);
    printf("Final Price %.2f\n",finalPrice);

    return 0;
}