#include <stdio.h>

int leapYear(int year);

int main()
{
    int year, month, day;
    int days = 10000;
    int monthDays;

    printf("年を入力してください: "); /* 入力の促し */
    scanf("%d", &year);

    printf("月を入力してください: ");
    scanf("%d", &month);

    printf("日を入力してください: ");
    scanf("%d", &day);

    while (days > 0) {

        if (month == 2) {
            if (leapYear(year) == 1) {
                monthDays = 29;
            } else {
                monthDays = 28;
            }
        }
        else if (month == 4 || month == 6 ||
                 month == 9 || month == 11) {
            monthDays = 30;
        }
        else {
            monthDays = 31;
        }

        monthDays = monthDays - day + 1;

        if (days < monthDays) {
            day = day + days;
            days = 0;
        }
        else {
            days = days - monthDays;
            month = month + 1;
            day = 1;

            if (month > 12) {
                year = year + 1;
                month = 1;
            }
        }
    }

    printf("10000日後は %d年%d月%d日です\n",
           year, month, day);

}

int leapYear(int year)
{
    if (year % 400 == 0) {
        return 1;
    }
    else if (year % 100 == 0) {
        return 0;
    }
    else if (year % 4 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}