#include<stdio.h>

int multi(int);

int main(void) {

	int n;

	scanf_s("%d", &n);

	printf("%d", multi(n));
}

int multi(int n) {

	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return 2 * multi(n - 1);
}