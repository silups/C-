/*#include<stdio.h>

int main(void) {

	int num;
	int nums[10] = { 0, };
	int i, even = 9, odd = 0;

	printf("총 10개의 숫자 입력\n");

	for (i = 0; i < 10; i++) {

		printf("입력: ");
		scanf_s("%d", &num);

		if (num % 2 == 0) {
			nums[even] = num;
			even--;
		}
		else {
			nums[odd] = num;
			odd++;
		}
	}

	printf("배열 요소의 출력 :");
	for (i = 0; i < 10; i++)
		printf("%d ", nums[i]);
}*/