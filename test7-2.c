#include <stdio.h>
int main(){

    int num;
    int sum = 0;
    int i = 1;

    printf("正の整数を入力してください（負の数を入力すると終了）\n");
    while(1){
        printf("%d番目の数：", i);
        scanf("%d", &num);

        if (num < 0)
            break;
        
        sum += num;

        i++;
    }

    printf("合計：%d", sum);
}