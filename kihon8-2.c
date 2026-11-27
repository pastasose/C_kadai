#include <stdio.h>
#include <math.h>

#define MAX 512

double norm(int array[], int size);

int main()
{
    int u[MAX];
    int size;
    int i;
    double result;

    do {
        printf("ベクトルの要素数は？(最大 512): ");
        scanf("%d", &size);

        if (size < 1) {
            printf("要素数は1以上にしてください。\n");
        }
        else if (size > MAX) {
            printf("要素数は512以下にしてください。\n");
        }

    } while (size < 1 || size > MAX);

    for (i = 0; i < size; i++) {
        printf("%d 番目の要素: ", i + 1);
        scanf("%d", &u[i]);
    }

    result = norm(u, size);

    printf("このベクトルのノルムは %f です。\n", result);

}

double norm(int array[], int size)
{
    int i;
    double sum = 0.0;

    for (i = 0; i < size; i++) {
        sum += array[i] * array[i];
    }

    return sqrt(sum);
}