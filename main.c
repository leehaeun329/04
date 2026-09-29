#include <stdio.h>

int main(void) {
    int total_seconds;
    int minutes, seconds;

    printf("input the second : ");
    scanf("%d", &total_seconds);

    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("the time is %d : %d\n", minutes, seconds);
    return 0;
}