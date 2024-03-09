#include<stdio.h>


int main(void) {
	
	int i, j, num1, num2;

	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
		i = num1, num1 = num2, num2 = i;

	for (i = num1; i <= num2; i++) {

		for (j = 0; j < 10; j++) {

			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}

