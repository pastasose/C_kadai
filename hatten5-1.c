#include <stdio.h>

#define P 4
#define Q 4

int main(){
    int a[P][Q] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int b[P][Q] = {0};

    int i, j;

    printf("回転前\n");

    for (i = 0; i < P; i++) {
        for (j = 0; j < Q; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < P; i++) {
        for (j = 0; j < Q; j++) {
            b[j][P - 1 - i] = a[i][j];
        }
    }

    printf("\n回転後\n");

    for (i = 0; i < P; i++) {
        for (j = 0; j < Q; j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

}