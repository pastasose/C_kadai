#include <stdio.h>
int main(){
    int n = 3;
    int angle;

    while(n<=12){
        if (360 % n != 0){
            n++;
            continue;
        }
        printf("正%d角形：", n);
        int i = 0;
        while (i < n){
            angle = 360 / n;
            printf("%d度 1m ", angle);
            i++;
        }
        printf("\n");
        n++;
    }
}