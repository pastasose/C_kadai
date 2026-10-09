#include <stdio.h>
int main(){
    double x, y;
    puts("浮動小数点を２つ入力してください");
    scanf("%lf", &x);
    scanf("%lf", &y);
    printf("%lfと%lfの積は%lfである。\n", x, y, x*y);
    
} 