
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    double n = pow(b, 2) - (4 * a * c);
    double x = sqrt(n);
    double z = -b - x;
    double q = -b + x;
    double ans2 = z / (2 * a);
    double ans1 = q / (2 * a);
    printf("R1 = %.5f\n", ans1);
    printf("R2 = %.5f\n", ans2);
     if (x <= 0)
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}