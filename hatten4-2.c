#include <stdio.h>
#define MAX 500
int main(){

    int value[MAX];  /* 整数を保存する配列 */
    int n = 0;       /* 入力された整数の個数 */
    int num;         /* 今回入力された整数 */
    int i;

    while (1){
        printf("正の整数を入力してください。(0と入力すると終了)：");
        scanf("%d", &num);

         // 0が入力されたら終了
        if (num == 0) {
            break;
        }

        // 配列の容量を超えないようにする
        if (n >= MAX) {
            printf("これ以上入力できません。\n");
            break;
        }

         // 配列の最後から、挿入する位置を探す
        i = n - 1;

        while (i >= 0 && value[i] > num) {
            value[i + 1] = value[i];
            i--;
        }

        // 空いた場所に新しい値を入れる
        value[i + 1] = num;
        n++;
    }

    // 小さい順に表示する
    printf("小さい順に表示します: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", value[i]);
    }
    printf("\n");
}
