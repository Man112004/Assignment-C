#include <stdio.h>

struct MovieShow {
    char movie[50];
    int screen;

    struct Time {
        int hours;
        int minutes;
    } time;
};

int main() {
    struct MovieShow show = {"3 Idiots", 2, {18, 30}};

    printf("Movie %s, Screen %d, Time %d:%d\n",
           show.movie,
           show.screen,
           show.time.hours,
           show.time.minutes);

    return 0;
}