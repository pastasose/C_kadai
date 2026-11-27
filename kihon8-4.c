
#include <stdio.h>
#include <math.h>

#define MAX 512

void inputVector(int array[], int size, char name);
int innerProduct(int x[], int y[], int size);
double norm(int array[], int size);

int main()
{
    int x[MAX];
    int y[MAX];
    int n;
    double result;

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

    inputVector(x, n, 'x');
    inputVector(y, n, 'y');

    if (norm(x, n) == 0.0 || norm(y, n) == 0.0) {
        printf("ゼロベクトルではcosθを計算できません。\n");
        return 1;
    }

    result = (double)innerProduct(x, y, n)
            / (norm(x, n) * norm(y, n));

    printf("cosθは %f です。\n", result);

}

void inputVector(int array[], int size, char name)
{
    int i;

    for (i = 0; i < size; i++) {
        printf("ベクトル %c の %d 番目の要素: ", name, i + 1);
        scanf("%d", &array[i]);
    }
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

double norm(int array[], int size)
{
    int i;
    double sum = 0.0;

    for (i = 0; i < size; i++) {
        sum += array[i] * array[i];
    }

    return sqrt(sum);
}
