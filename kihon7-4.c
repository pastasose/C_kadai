
#include <stdio.h>

#define EDGE_TILES (3)

void draw_feet(int left, int right, int germ);
void draw_line(void);
void fill_position(int row, int left, int right, int germ);

int main(){
    char c;
    int left, right, germ;
    int result;

    printf("1文字入力: ");
    scanf(" %c", &c);

    printf("入力文字は 16進数で表現すると 0x%X で，これをもとに細菌の位置を決定\n",
           (unsigned char)c);

    germ = ((unsigned char)c % (EDGE_TILES * EDGE_TILES - 1)) + 1;

    printf("左足 位置 [1-9]: ");
    scanf("%d", &left);

    while (left < 1 || left > 9) {
        printf("1から9までの数字を入力してください: ");
        scanf("%d", &left);
    }

    printf("右足 位置 [1-9]: ");
    scanf("%d", &right);

    while (right < 1 || right > 9 || right == left) {
        printf("別の1から9までの数字を入力してください: ");
        scanf("%d", &right);
    }

    if (left == germ || right == germ) {
        result = 1;
    }
    else {
        result = 0;
    }

    if (result == 1) {
        printf("感染しました。細菌はタイル %d にいました\n", germ);
    }
    else {
        printf("無事です。細菌はタイル %d にいました\n", germ);
    }

    draw_feet(left, right, germ);

}

void draw_feet(int left, int right, int germ)
{
    int i;

    for (i = 1; i <= EDGE_TILES; i++) {
        draw_line();
        printf("\n");

        fill_position(i, left, right, germ);
        printf("\n");
    }

    draw_line();
    printf("\n");

    return;
}

void draw_line(void)
{
    int i;

    for (i = 1; i <= EDGE_TILES; i++) {
        printf("+-");
    }

    printf("+");

    return;
}

void fill_position(int row, int left, int right, int germ)
{
    int i;
    int tile;

    for (i = 1; i <= EDGE_TILES; i++) {

        tile = 3 * row - 3 + i;

        printf("|");

        if (tile == germ) {
            printf("@");
        }
        else if (tile == left) {
            printf("L");
        }
        else if (tile == right) {
            printf("R");
        }
        else {
            printf("%d", tile);
        }
    }

    printf("|");

    return;
}
