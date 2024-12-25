#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int arr[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int count = 0;
        

                for (int j = 0; j < n; j++)
                {
                    if (arr[j] % k == 0)
                    {
                        count++;
                    }
                }
            
        
        printf("Case %d : %d\n", i, count);
    }

    return 0;
}