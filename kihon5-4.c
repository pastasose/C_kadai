#include <stdio.h>

#define STUDENT 5
#define SUBJECT 4

int main()
{
    int score[STUDENT][SUBJECT] = {
        {85, 74, 63, 90},
        {78, 65, 70, 62},
        {89, 92, 88, 76},
        {32, 48, 66, 25},
        {92, 76, 81, 98}
    };

    int student, subject;
    int sum;

    for (subject = 0; subject < SUBJECT; subject++) {
        sum = 0;

        for (student = 0; student < STUDENT; student++) {
            sum += score[student][subject];
        }

        switch (subject) {
            case 0:
                printf("国語の平均点は %.1f です。\n", (double)sum / STUDENT);
                break;
            case 1:
                printf("数学の平均点は %.1f です。\n", (double)sum / STUDENT);
                break;
            case 2:
                printf("理科の平均点は %.1f です。\n", (double)sum / STUDENT);
                break;
            case 3:
                printf("社会の平均点は %.1f です。\n", (double)sum / STUDENT);
                break;
        }
    }

    for (student = 0; student < STUDENT; student++) {
        sum = 0;

        for (subject = 0; subject < SUBJECT; subject++) {
            sum += score[student][subject];
        }

        printf("番号 %d の学生の平均点は %.1f です。\n",
               student + 1, (double)sum / SUBJECT);
    }

}