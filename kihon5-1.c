#include <stdio.h>
#define ROW 3
#define COLUMN 3

int main(){
    int u[ROW][COLUMN];
    int i, j;

    for (i = 0; i < ROW; i++){
        for (j = 0; j < COLUMN; j++){
            printf("input u[%d][%d]: ", i, j);
            scanf("%d", &u[i][j]);
        }
    }

    printf("The matrix is\n");

    for (i = 0; i < ROW; i++){
        for ( j = 0; j < COLUMN; j++){
            printf("%3d", u[i][j]);
        }
        printf("\n");
    }
}