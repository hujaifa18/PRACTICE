#include <stdio.h>
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    if (t >= 1 && t <= 10000)
    {
        for (int i = 1; i <= t; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            if (a <= 20 && b <= 20 && c <= 20)
            {
                if ((a + b + c) / 3 == a || (a + b + c) / 3 == b || (a + b + c) / 3 == c)
                {
                    printf("Case %d: Peaceful\n",i);
                }
                else
                {
                    printf("Case %d: Fight\n",i);
                }
            }
        }
    }
    return 0;
}