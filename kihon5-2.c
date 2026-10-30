#include <stdio.h>
#define P 2
#define Q 3
#define R 2
int main() {

    int A[P][Q] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[Q][R] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int C[P][R] = {0};
    int i, j, k;

    printf("行列 A:\n");
    for (i = 0; i < P; i++) {
        for (j = 0; j < Q; j++) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

    printf("行列 B:\n");
    for (i = 0; i < Q; i++) {
        for (j = 0; j < R; j++) {
            printf("%3d", B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < P; i++) {
        for (j = 0; j < R; j++) {
            for (k = 0; k < Q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("行列 C:\n");
    for (i = 0; i < P; i++) {
        for (j = 0; j < R; j++) {
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }
}
