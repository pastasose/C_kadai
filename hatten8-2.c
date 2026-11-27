

#include <stdio.h>

#define MAX_N 15

void matrix_product(int mat_x[3][3], int mat_y[3][3], int mat_z[3][3]);
void matrix_print(int matrix_x[3][3]);

int main(void)
{
    int A[3][3] = {
        {1, 0, -1},
        {1, 2, 1},
        {2, 2, 3}
    };

    int result[3][3];
    int temp[3][3];
    int n;
    int i, j, k;

    do {
        printf("n の値を入力してください (最大 15): ");
        scanf("%d", &n);

        if (n < 1) {
            printf("n は1以上にしてください\n");
        }
        else if (n > MAX_N) {
            printf("n は15以下にしてください\n");
        }

    } while (n < 1 || n > MAX_N);

    /* Aの値をresultにコピーする */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = A[i][j];
        }
    }

    /* Aの累乗を計算する */
    for (k = 1; k < n; k++) {
        matrix_product(result, A, temp);

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                result[i][j] = temp[i][j];
            }
        }
    }

    matrix_print(result);

    return 0;
}

/* 2つの行列の積を計算する関数 */
void matrix_product(int mat_x[3][3], int mat_y[3][3], int mat_z[3][3])
{
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            mat_z[i][j] = 0;

            for (k = 0; k < 3; k++) {
                mat_z[i][j] += mat_x[i][k] * mat_y[k][j];
            }
        }
    }
}

/* 行列を表示する関数 */
void matrix_print(int matrix_x[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", matrix_x[i][j]);
        }
        printf("\n");
    }
}
