#include <stdio.h>
int main(){

    int p = 4;
    int value[p];
    int n;
    int sum = 0;
    double average;
    int big = 0;

    printf("5つの整数を入力してください\n");

    for (int i = 0; i <= 4; i++){
        n = i + 1;
        printf("%d番目の入力：", n);
        scanf("%d", &value[i]);
        sum += value[i];
    }

    average = (double)sum / n;
    printf("平均値：%.3f\n", average);

    for (int i = 0; i <= 4; i++){
        if (value[i] > average){
            big ++;
        }
    }

    printf("平均値よりも大きい要素の数：%d\n", big);
    

}