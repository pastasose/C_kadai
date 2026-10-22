#include <stdio.h>
int main(){
    int n;
    int i;
    printf("3以上の整数を入力してください");
    scanf("%d", &n);
    printf("3以上の整数 %d\n", n);

    if(n >= 3){
        for(i = 2; i <= n; i++){
            if (n % i == 0){
                break;
            } 
        }      
        if (i == n)
            printf("%dは素数です\n", n);
        else
            printf("%dは素数ではありません\n", n);     

    }
    else
        printf("3以上の整数を入力してください\n");
    
    
}