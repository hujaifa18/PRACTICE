#include <stdio.h>
int call = 0;
int fib(int a)
{
    call++;
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return (fib(a - 1) + fib(a - 2));
}
int main()
{
    int T, fib(int);
    scanf("%d", &T);

    while (T--)
    {
        int N, fibN;
        scanf("%d", &N);
        call = 0;
        fibN = fib(N);
        printf("fib(%d) = %d calls = %d\n", N, call - 1, fibN);
    }
    return 0;
}