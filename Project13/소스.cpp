#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int intpow(int m, int n);

int intpow(int m, int n) {
	int total = m * n;
	return total;
}

int main() {
	int m, n = 0;
	printf("m�� �Է��Ͽ���:");
	scanf("%d", &m);
	printf("n�� �Է��Ͽ���:");
	scanf("%d", &n);

	printf("mn�� ����: %d", intpow(m, n));
}