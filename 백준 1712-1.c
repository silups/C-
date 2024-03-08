#include<stdio.h>

int main(void) {

	int  A, B, C;
	int gain;

	scanf_s("%d %d %d", &A, &B, &C);

	gain = A / (C - B) + 1;

	if (B >= C)
		printf("-1");
	else
		printf("%d", gain);

}