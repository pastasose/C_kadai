#include<stdio.h>

int main(){
    int x;
    int y;
    printf("整数を２つ入力してください。\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%dと%dを入力しました\n",x,y);
    printf("%d+%dは%dです。\n",x,y,x+y);
    printf("%d-%dは%dです。\n",x,y,x-y);
    printf("%d*%dは%dです。\n",x,y,x*y);
    printf("%d/%dは%dです。\n",x,y,x/y);
}