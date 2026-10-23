#include <stdio.h>
int main(){
    int week;
    int lastday;
    int i;

    // 1日の曜日を入力する
    do {
        printf("1日の曜日は?: 日 (1) 月 (2) 火 (3) 水 (4) 木 (5) 金 (6) 土 (7): ");
        scanf("%d", &week);
    } while (week < 1 || week > 7);

    // 月末の日付を入力する
    do {
        printf("月末の日付は?: 28日以上，31日以下: ");
        scanf("%d", &lastday);
    } while (lastday < 28 || lastday > 31);

    // 曜日の見出しを表示する
    printf("\nSUN MON TUE WED THU FRI SAT\n");

    // 1日の曜日に合わせて空白を表示する
    for (i = 1; i < week; i++) {
        printf("    ");
    }

    // 1日から月末までの日付を表示する
    for (i = 1; i <= lastday; i++) {
        printf("%3d ", i);

        // 土曜日まで表示したら改行する
        if ((week + i - 1) % 7 == 0) {
            printf("\n");
        }
    }

    // 最後の日が土曜日でなければ改行する
    if ((week + lastday - 1) % 7 != 0) {
        printf("\n");
    }

}