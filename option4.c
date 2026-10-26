
#include <stdio.h>

int main()
{
    int N;
    int i, j;

    printf("自然数を入力してください\n");
    scanf("%d", &N);

    if (N <= 0) {
        printf("自然数を入力してください。\n");
    } else {
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

}
