#include <stdio.h>
int main()
{
    int N;
    printf("Enter the Value of N = ");
    scanf("%d", &N);

    int num[N], i;
    printf("Enter %d integer Numbers = ",N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = 0;
    for (int i = 0; i < N; i++)
    {

        if (max < num[i])
        {
            max = num[i];
        }
    }
    printf("The heighst Number = %d\n", max);
    int min = num[0];
    for (int i = 0; i < N; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }
    printf("The lowest Number = %d\n", min);
    return 0;
}