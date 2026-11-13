#include <stdio.h>
#define P 2
#define Q 10
int main(){

    int score[P][Q] = {
        {67, 48, 56, 97, 30, 88, 76, 55 , 66, 78}, 
        {0, 0, 0, 0, 0, 0, 0, 0 ,0 ,0}
    };

    int i, j;
    int rank = 1;

    for (i = 100; i >= 0; i--){
        for (j = 0; j < Q; j++){
            if (score[0][j] == i) {
                score[1][j] = rank;
                rank++;
                break;
            }

        }
    }
     printf("点数\t順位\n");

    for (j = 0; j < Q; j++) {
        printf("%d\t%d\n", score[0][j], score[1][j]);
    }


}