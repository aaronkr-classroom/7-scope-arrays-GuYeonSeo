#include <stdio.h>

int result = 0;

void Sum(int x, int y) {
	result = x + y; //0, null
}

int main(void) {
	int a = 3,
		b = 5;

	Sum(a, b);

	printf("%d + %d = %d", a, b, result);

	return 0;
}