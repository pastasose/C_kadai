
#include <stdio.h>

void multiply(int a[2][3], int b[3][2]);

int main(void)
{
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[3][2] = {
        {2, 3},
        {4, 5},
        {6, 7}
    };

    multiply(A, B);

    return 0;
}

void multiply(int a[2][3], int b[3][2])
{
    int i, j, k;
    int sum;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {

            sum = 0;

            for (k = 0; k < 3; k++) {
                sum += a[i][k] * b[k][j];
            }

            printf("%d  ", sum);
        }

        printf("\n");
    }
}

