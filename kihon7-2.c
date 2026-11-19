#include <stdio.h>
void run(char c, int length);
int main(){
    int n;
    int i;

    do{
        printf("正の整数：");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++){
        printf("%3d：", i);

        run(' ', i -1);
        run('*', n - i + 1);
        printf("\n");
    }
}

void run(char c, int length){
    int i;

    for (i = 0; i < length; i++){
        printf("%c", c);
    }
}