#include <stdio.h>
int main(){
    int n;

    printf("正の整数を入力してください\n正の整数 ");
    scanf("%d", &n);

    if (n < 1){
        printf("正の整数ではありません\n");
    }

    int i;
    int j;
    int stars;
    for (i = 1; i <= n; i++){
        for (j = 0; j < n - i; j ++){
            printf(" ");
        }

        stars = 2 * i - 1;

        for (j = 0; j < stars; j++){
            printf("*");
        }

        printf("\n");
    }
}