#include<stdio.h>

int main(void) {

	int A;

	scanf_s("%d", &A);

	printf("%#X\n", A);
	printf("%x\n", A);
	printf("%o\n", A);
	printf("%#o\n", A);
}