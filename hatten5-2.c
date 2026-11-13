#include <stdio.h>

int main(){
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rotate[5][5] = {0};

    int i, j;

    /* 元の行列を表示 */
    printf("回転前\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    /* 45度回転させる */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            rotate[i + j][2 - i + j] = matrix[i][j];
        }
    }

    /* 回転後の行列を表示 */
    printf("回転後\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (rotate[i][j] != 0) {
                printf("%4d", rotate[i][j]);
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }

}