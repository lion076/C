#include <stdio.h>

int main() {
    for (int dan = 1; dan < 10; dan++) {
        if (dan % 2 != 0)
            continue;
        for (int num = 1; num < 10; num++) {
            if (dan < num)
                break;
            printf("%d X %d = %d \n", dan, num, dan * num);
        }
    }
    return 0;
}