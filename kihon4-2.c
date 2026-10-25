#include <stdio.h>
#define MAX 500
int main(){
    int value[MAX];

    int n;
    printf("データ数を入力してください：");
    scanf("%d", &n);

    if (n < 1 || n > MAX)
        printf("データ数は1から%dまでです\n", MAX);

    for(int i = 0; i < n; i++){
        printf("%d番目のデータ：", i);
        scanf("%d", &value[i]);
    }
    
    printf("\n");

    for (int i = n - 1; i>=0; i--){
        printf("%d番目の内容は%dです.\n", i, value[i]);
    }
}