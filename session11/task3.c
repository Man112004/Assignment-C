#include <stdio.h>

int main() {
    int orders[5] = {250, 450, 300, 550, 200};
    int *ptr = orders;

    for (int i = 0; i < 5; i++) {
        printf("Order amount %d, Address %p\n",
               *(ptr + i), (int *)(ptr + i));
    }

    return 0;
}