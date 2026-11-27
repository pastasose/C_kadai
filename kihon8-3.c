
#include <stdio.h>

#define MAX 512

int innerProduct(int x[], int y[], int size);

int main()
{
    int x[MAX];
    int y[MAX];
    int n;
    int i;
    int result;

    do {
        printf("ベクトルの要素数は？(最大 512): ");
        scanf("%d", &n);

        if (n < 1) {
            printf("要素数は1以上にしてください。\n");
        }
        else if (n > MAX) {
            printf("要素数は512以下にしてください。\n");
        }

    } while (n < 1 || n > MAX);

    for (i = 0; i < n; i++) {
        printf("ベクトル x の %d 番目の要素: ", i + 1);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < n; i++) {
        printf("ベクトル y の %d 番目の要素: ", i + 1);
        scanf("%d", &y[i]);
    }

    result = innerProduct(x, y, n);

    printf("ベクトル x, y の内積は %d です。\n", result);

}

int innerProduct(int x[], int y[], int size)
{
    int i;
    int sum = 0;

    for (i = 0; i < size; i++) {
        sum += x[i] * y[i];
    }

    return sum;
}
