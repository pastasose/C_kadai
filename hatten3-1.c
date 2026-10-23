#include <stdio.h>
int main(){
    int n;

    do{
        printf("行数を示す正の奇数：");
        scanf("%d", &n);
    }while (n <= 0 || n % 2 == 0);

    // 外側のループで行を管理する
    int i, j;
    for (i = 1; i <= n; i++) {
        // 内側のループで列を管理する
        for (j = 1; j <= n; j++) {
            // 対角線上なら*を表示する
            if (i == j || i + j == n + 1) {
                printf("*");
            } else {
                // 対角線上でなければ-を表示する
                printf("-");
            }
        }
        // 1行表示したら改行する
        printf("\n");
    }
    
}