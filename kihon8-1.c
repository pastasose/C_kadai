#include <stdio.h>
#define MAX 512

double average(int array[], int size);
int main(){
    int u[MAX];
    int size;
    int i;
    double result;

    printf("配列のサイズを入力してください：");
    scanf("%d", &size);

    printf("配列の要素を入力してください\n");
    for (i = 0; i < size; i++){
        printf("u[%d]：", i);
        scanf("%d", &u[i]);
    } 
}