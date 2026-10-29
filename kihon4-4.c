#include <stdio.h>
#define MAX 500
int main(){
    int value[MAX];
    int n;

    do{
        printf("データ数を入力してください(最大500) : ");
        scanf("%d", &n);

        if (n < 1 || n > MAX){
            printf("範囲外の値です。再入力してください。\n");
        }
    }while (n < 1 || n > MAX);

    int sum = 0;
    double average;

    for(int i = 0; i < n; i++){
        printf("%d番目のデータ：", i);
        scanf("%d", &value[i]);

        sum += value[i];
    }

    average = (double)sum / n;

    for (int i = 0; i < n; i++){
        double hensa = value[i] - average;
        printf("%d番目の偏差は%.2fです。\n", i, hensa);
    }
}