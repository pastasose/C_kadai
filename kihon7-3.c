#include <stdio.h>
#include <math.h>

double interest(double r, int n);

int main(){
    double r;
    int y, n;
    int repayment;

    printf("利率 (r): ");
    scanf("%lf", &r);

    printf("金額 (y): ");
    scanf("%d", &y);

    printf("期間 (n): ");
    scanf("%d", &n);

    repayment = (int)(y * interest(r, n) + 0.5);

    printf("返済金額は %d 円です\n", repayment);

}

double interest(double r, int n)
{
    return pow(1 + r / 100, n);
}