#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EDGE_TILES (5)

int put_germ(int size);
int put_foot(int size, int already);
int judge_infection(int left, int right, int original);
void draw_feet(int left, int right, int germ);
void draw_line(void);
void fill_position(int row, int left, int right, int germ);

int main()
{
    char c;
    int size = EDGE_TILES * EDGE_TILES;
    int germ, left, right;
    int i;

    printf("1文字入力: ");
    scanf(" %c", &c);

    printf("入力文字は16進数で表現すると 0x%02X で，これをもとに細菌の位置を決定\n",
           (unsigned char)c);

    srand((unsigned char)c);

    germ = put_germ(size);

    left = put_foot(size, 0);
    right = put_foot(size, left);

    if (judge_infection(left, right, germ) == 1) {
        printf("感染してしまいました．");
    } else {
        printf("無事です．");
    }

    printf("細菌はタイル");

    for (i = germ; i <= size; i += germ) {
        printf(" %d", i);
    }

    printf(" にいました\n");

    draw_feet(left, right, germ);

}

int put_germ(int size)
{
    return rand() % size + 1;
}

int put_foot(int size, int already)
{
    int position;

    do {
        printf("足 位置 [1-%d]: ", size);
        scanf("%d", &position);
    } while (position < 1 || position > size ||
             position == already);

    return position;
}

int judge_infection(int left, int right, int original)
{
    if (left % original == 0 || right % original == 0) {
        return 1;
    } else {
        return 0;
    }
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
}

void draw_line(void)
{
    int i;

    for (i = 1; i <= EDGE_TILES; i++) {
        printf("+--");
    }

    printf("+");
}

void fill_position(int row, int left, int right, int germ)
{
    int i, tile;

    for (i = 1; i <= EDGE_TILES; i++) {
        tile = (row - 1) * EDGE_TILES + i;

        printf("|");

        if (tile % germ == 0) {
            printf(" @");
        }
        else if (tile == left) {
            printf(" L");
        }
        else if (tile == right) {
            printf(" R");
        }
        else {
            printf("%2d", tile);
        }
    }

    printf("|");
}