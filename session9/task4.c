#include <stdio.h>

int main()
{
    int cricketScores[4][2] = {
        {180, 165},
        {150, 175},
        {200, 190},
        {160, 170}
    };

    for (int i = 0; i < 4; i++)
    {
        if (cricketScores[i][0] > cricketScores[i][1])
        {
            printf("Match %d %d\n", i + 1, cricketScores[i][0]);
        }
        else
        {
            printf("Match %d %d\n", i + 1, cricketScores[i][1]);
        }
    }

    return 0;
}