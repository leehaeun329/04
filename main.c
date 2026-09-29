#include <stdio.h>

int main(void) {
    int x, y;
    
    printf("input two integers: ");
    scanf("%d %d", &x, &y);

    printf("+ result is %d\n", x + y);
    printf("- result is %d\n", x - y);
    printf("* result is %d\n", x * y);
    printf("/ result is %d\n", x / y);
    printf("%% result is %d\n", x % y);

    return 0;
}