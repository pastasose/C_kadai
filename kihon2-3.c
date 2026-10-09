#include <stdio.h>
int main(){
    int month;
    printf("何月ですか？\n");
    scanf("%d", &month);

    if(month >= 3 && month <= 5)
        printf("%d月は春です。\n", month);
    else if(month >= 6 && month <= 8)
        printf("%d月は夏です。\n", month);
    else if(month >= 9 && month <= 11)
        printf("%d月は秋です。\n", month);
    else if(month == 12 || month == 1 || month == 2)
        printf("%d月は冬です。\n", month);
    else
        printf("%dは月じゃねえよ！\n", month);
}