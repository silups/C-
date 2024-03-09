#include<stdio.h>

/*int main(void) {

	int num1, num2, i, min, max = 0;

	scanf_s("%d %d", &num1, &num2);

	min = num1;

	if (num1 > num2)
		min = num2;


	for (i = 1; i < min; i++) {

		if (num1 % i == 0 && num2 % i == 0)
			max = i;
	}
	printf("%d ", max);
}*/

int main(void) {

	int num1, num2;

	scanf_s("%d %d", &num1, &num2);

	while (num1 != 0 && num2 != 0) {

		if (num1 > num2) {
			num1 = num1 % num2;
		}
		else if (num2 >= num1) {
			num2 = num2 % num1;
		}
	}

	if (num1 < num2)
		printf("%d", num2);
	else
		printf("%d", num1);
}