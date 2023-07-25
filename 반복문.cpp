#include <stdio.h>

int main() {
	int dan = 2, num = 0;
	do {
		num = 1;
		do {
			printf("%d X %d = %d\n", dan, num, dan * num);
			num++;
		} while (num < 10);
		dan++;
	} while (dan < 10);
	return 0;
} 