#include <stdio.h>

int main() {
    int likes = 500;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Likes value %d\n", likes);
    printf("Address stored in ptrLikes %p\n", (int *)ptrLikes);

    return 0;
}