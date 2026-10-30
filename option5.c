#include <stdio.h>

int main()
{
    double R;
    double f[10];

    scanf("%lf", &R);

    f[0] = 0.1;
    for (int i = 1; i < 10; i++) {
        f[i] = f[i - 1] * R;
    }

    for (int i = 0; i < 10; i++) {
        printf("%f\n", f[i]);
    }

}