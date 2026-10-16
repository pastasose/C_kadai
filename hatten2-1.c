#include <stdio.h>
int main(){
    int a, b, c, p;
    printf("3辺を入力してください。\n");
    printf("1辺目: ");
    scanf("%d", &a);
    printf("2辺目: ");
    scanf("%d", &b);
    printf("3辺目: ");
    scanf("%d", &c);

    /* aを最長辺にする */
    if (a < b) {
    p = a;
    a = b;
    b = p;
    }

    if (a < c) {
    p = a;
    a = c;
    c = p;
    }
    if (b < c) {
    p = b;
    b = c;
    c = p;
    }

    /*三角形の形を判別*/
    
    if (a >= b + c) {
        printf("3辺が三角形をつくりません。\n");
    }
    if (a <= b + c){
        if (a * a > b * b + c * c) {
            printf("3辺 %d %d %d は鈍角三角形です。\n", a, b, c);
        } 
        else if (a * a == b * b + c * c) {
            printf("3辺 %d %d %d は直角三角形です。\n", a, b, c);
        } 
        else {
            printf("3辺 %d %d %d は鋭角三角形です。\n", a, b, c);
        }

        /*正三角形・二等辺三角形を判別*/
        if (a == b && b == c) {
        printf("さらに正三角形です。\n");
        } 
        else if (a == b || b == c) {
        printf("さらに二等辺三角形です。\n");
        }
    }
}
