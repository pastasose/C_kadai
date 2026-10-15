
#include <stdio.h>

int main()
{
    // 成績情報の初期値を設定する
    int id = 1234;       // 学生証番号
    int english = 94;    // 英語の点数
    int math = 78;       // 数学の点数

    int command;         // 実行するコマンド番号
    int value;           // 修正する新しい値

    // 現在の成績情報を表示する
    printf("現在の成績情報は，学生証番号:%d, 英語:%d 点, 数学:%d 点です\n",
           id, english, math);

    // 修正コマンドの一覧を表示する
    printf("[0] 学生証番号の修正\n");
    printf("[1] 英語の点数の修正\n");
    printf("[2] 数学の点数の修正\n");

    // 実行するコマンド番号を入力する
    printf("どのコマンドを実行しますか? ");
    scanf("%d", &command);

    // 入力されたコマンド番号によって処理を分ける
    switch (command) {
    case 0:
        // 学生証番号を修正する
        printf("新しい学生証番号を入力してください: ");
        scanf("%d", &value);

        // 学生証番号が4桁の場合だけ更新する
        if (value >= 1000 && value <= 9999) {
            id = value;
        }
        break;

    case 1:
        // 英語の点数を修正する
        printf("新しい英語の点数を入力してください: ");
        scanf("%d", &value);

        // 点数が0点以上100点以下の場合だけ更新する
        if (value >= 0 && value <= 100) {
            english = value;
        }
        break;

    case 2:
        // 数学の点数を修正する
        printf("新しい数学の点数を入力してください: ");
        scanf("%d", &value);

        // 点数が0点以上100点以下の場合だけ更新する
        if (value >= 0 && value <= 100) {
            math = value;
        }
        break;

    default:
        // 0、1、2以外が入力された場合の処理
        printf("正しいコマンドを入力してください\n");
        break;
    }

    // 修正後の成績情報を表示する
    printf("現在の成績情報は，学生証番号:%d, 英語:%d 点, 数学:%d 点です\n",
           id, english, math);


}

