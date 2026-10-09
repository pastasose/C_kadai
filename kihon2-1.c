#include <stdio.h>
int main(){
    double h, w;

    printf("身長と体重を入力してください。\n");
    printf("身長\n");
    scanf("%lf", &h);
    printf("体重\n");
    scanf("%lf", &w);

    double std;
    std=(h-100.0)*0.9;

    printf("あなたの標準体重は%fです。\n", std);

    if (w-std>=8.0)
        printf("あなたは少し太っています。\n");
    
    else if (w-std<=-8.0)
        printf("あなたは少し瘦せています。\n");
    
    else
        printf("あなたの体重は標準です。\n");
}