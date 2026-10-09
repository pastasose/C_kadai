#include <stdio.h>
int main(){
    int score;
    printf("あなたの試験の点数を１００点満点で入力してください。\n");
    scanf("%d", &score);

    if(score>=90 && score<=100)
        printf("あなたの評価はA+です。\n");
    else if (80 <= score && score < 90)
        printf("あなたの評価はAです。\n");
    else if (70 <= score && score < 80)
        printf("あなたの評価はBです。\n");
    else if (60 <= score && score < 70)
        printf("あなたの評価はCです。\n");
    else if(score >= 0 && score < 60)
        printf("あなたの評価はFです。\n");
    else if(score > 100 || score < 0)
        printf("0~100の数字を入力してください。\n");
}