#include<stdio.h>

int bj1008(void) {

	int A, B;

	scanf_s("%d %d", &A, &B);

	printf("%.9Lf", (long double)A / B);
}