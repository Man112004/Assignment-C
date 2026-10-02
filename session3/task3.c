#include <stdio.h>

int main() {
    char playlistName[] = "Ganpati Bappa";
    int totalSongs = 25;
    float averageDuration = 4.5f;

    printf("My Spotify playlist \"%s\" has %d songs with an average duration of %.1f minutes.\n",
           playlistName, totalSongs, averageDuration);

    return 0;
}