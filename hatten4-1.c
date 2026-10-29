#include <stdio.h>
#define MAX 500
int main(){

    int x[MAX];
    int y[MAX];
    int n;
    int naiseki;

    do {
        printf("ベクトルの要素数は？(最大500): ");
        scanf("%d", &n);

        if (n < 1 || n > MAX) {
            printf("要素数は1から500の範囲で入力してください。\n");
        }
    } while (n < 1 || n > MAX);

     // ベクトルxの要素を入力する
    for (int i = 0; i < n; i++) {
        printf("xの%d番目の要素: ", i + 1);
        scanf("%d", &x[i]);
    }

    // ベクトルyの要素を入力する
    for (int i = 0; i < n; i++) {
        printf("yの%d番目の要素: ", i + 1);
        scanf("%d", &y[i]);
    }

    // 内積を計算する
    for (int i = 0; i < n; i++) {
        naiseki += x[i] * y[i];
    }

    // 内積を表示する
    printf("内積 x・y は%dです。\n", naiseki);
}