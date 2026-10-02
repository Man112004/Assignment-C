#include <stdio.h>

float calculateAverage(int orders[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + orders[i];
    }

    return (float)sum / size;
}

int main()
{
    int orderAmounts[7] = {200, 350, 150, 400, 250, 300, 350};

    float average = calculateAverage(orderAmounts, 7);

    printf("Average Spend %.2f\n", average);

    return 0;
}