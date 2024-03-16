/*#include<stdio.h>

int main(void) {

	int num, len = 0, count = 0, i;
	int binarynum[8] = { 0, };

	printf("10진수 정수 입력: ");
	scanf_s("%d", &num);

	while (num != 0 && num != 1) {

		if (num % 2 == 0)
			binarynum[count] = 0;
		else
			binarynum[count] = 1;

		num = num / 2;
		count++;
	}
	binarynum[count] = num;

	for(i = count; i >= 0; i--){
		printf("%d", binarynum[i]);
	}
}*/