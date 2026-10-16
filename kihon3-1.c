#include <stdio.h>
int main(){
    int s;
    printf("王様，石の数は？\n");
    scanf("%d", &s);
    
    int c =1;
    while(s >= c*c){
        s = s - c*c;
        c++;
    }
    int d = c - 1;
    printf("その石でできるピラミッドは%d段で，石は%d個残ります。\n", c, d);
    
}