#include<stdio.h>

int main(void) {

	double n, n2 = 1;
	int k = 0;

	scanf_s("%lf", &n);

	if (n >= 1) {
		while (n2 <= n) {
	
			n2 = n2 * 2;
			k++;
		}
		printf("%d", k - 1);
	}
	else {
		while (n2 >= n) {

			n2 = n2 / 2;
			k--;
		}
		printf("%d", k+1);
	}
	
}