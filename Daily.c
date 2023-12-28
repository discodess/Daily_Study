#include <stdio.h>

int main()
{
    int hour, min;
    int sum;
    int allam;
    int o_hour, o_min;

    scanf_s("%d %d", &hour, &min);

    sum = hour * 60 + min;

    if (sum <= 45) {
        allam = 1440 + sum - 45;
    }
    else allam = sum - 45;

    o_hour = allam / 60;
    o_min = allam % 60;

    printf("%d %d", o_hour, o_min);


    return 0;
}
