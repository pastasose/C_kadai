#include <stdio.h>

int main(){
    int a, b;

    printf("整数を２つ入力してください。\n");
    scanf("%d%d", &a, &b);

    printf("あなたは%dと%dを入力しました。\n", a, b);

    if (b == 0) {
        if (a == 0) {
            printf("入力が無効です。\n");
        } 
        else if (a < 0) {
            printf("%dを%dで割るとマイナス無限大です。\n", a, b);
        } 
        else {
            printf("%dを%dで割ると無限大です。\n", a, b);
        }
    } 
    else {
        printf("%dを%dで割ると、%dあまり%dです。\n", a, b, a / b, a % b);
        printf("%dを%dで割ると、%.2fです。\n", a, b, (float)a / b);
    }

    printf("%dと%dの平均は、%.2fです。\n", a, b, (a + b) / 2.0);

}