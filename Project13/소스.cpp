#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int intpow(int m, int n);

int intpow(int m, int n) {
	int total = m * n;
	return total;
}

int main() {
	int m, n = 0;
	printf("m을 입력하여라:");
	scanf("%d", &m);
	printf("n을 입력하여라:");
	scanf("%d", &n);

	printf("mn의 값은: %d", intpow(m, n));
}