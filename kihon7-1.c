#include <stdio.h>
double multFloat(double, double);
int main(){
    double x, y;
    double result;
    while(1){
        printf("一つ目の数");
        scanf("%lf", &x);
        printf("二つ目の数");
        scanf("%lf", &y);
        if (x == 0.0 && y == 0.0){
            break;
        }
        result = multFloat(x, y);
        printf("%.2f\n", result);
    }
    
}
double multFloat(double a, double b){
    return a * b;
}