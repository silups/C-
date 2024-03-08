#include<stdio.h>

int main(void) {

	int  A, B, C;
	int sum = 0, add = 0, N = 0;

	scanf_s("%d %d %d", &A, &B, &C);

	if (B >= C)
		printf("-1");
	else {
		while (1) {

			sum = A + (B * N);
			add = C * N;

			if (sum < add)
				break;


			N++;
		}
		printf("%d", N);
	}
}