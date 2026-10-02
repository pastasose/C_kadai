#include<stdio.h>
int main(void){
    int x;
    int y;
    printf("整数を入力してください\n");
    scanf("%d",&x);
    printf("整数を入力してください\n");
    scanf("%d",&y);
    printf("%d割る%dの商は%d、%d割る%dの余りは%dである\n",x,y,x/y,x,y,x%y);
}