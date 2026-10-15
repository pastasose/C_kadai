#include <stdio.h>
int main(){
    int date;
    printf("2001年7月の曜日を調べます。\n");
    printf("調べたい日付は？\n");
    scanf("%d", &date);

    if(date >= 1 && date <= 31){

         int day;
        day = (date - 1) % 7;

        switch (day){
            case 0:
                 printf("2001年7月%d日は日曜日です。\n", date);
                 break;
            case 1:
                printf("2001年7月%d日は月曜日です。\n", date);
                break;
            case 2:
                printf("2001年7月%d日は火曜日です。\n", date);
                break;
            case 3:
                printf("2001年7月%d日は水曜日です。\n", date);
                break;
            case 4:
                printf("2001年7月%d日は木曜日です。\n", date);
                break;
            case 5:
                printf("2001年7月%d日は金曜日です。\n", date);
                break;
            case 6:
                printf("2001年7月%d日は土曜日です。\n", date);
                break;
        }
    }
    else if(date < 1){
        printf("そんな小さい日付ねえよ\n");
    }
    else if(date > 31){
        printf("そんなでかい日付ねえよ\n");
    }


    
}