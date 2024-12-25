#include <stdio.h>

#define SIZE 20

int main()
{
    int N[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < SIZE / 2; i++)
    {
        int temp = N[i];
        N[i] = N[SIZE - 1 - i];
        N[SIZE - 1 - i] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
