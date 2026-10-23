#include <stdio.h>
int main(){
    int value[10] = {10, 5, 25, -10, 7, 0, 52, 27, -8, 1};
    
    for (int i = 9; i>=0; i--){
        printf("%d番目の内容は%dです.\n", i, value[i]);
    }
}