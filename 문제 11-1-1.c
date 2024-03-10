#include<stdio.h>

int main(void) {

	int num[5] = { 0, };
	int i, Max, Min, sum;
	int numsize = sizeof(num) / sizeof(int); // 배열 num의 길이



	for (i = 0; i < numsize; i++) {

		scanf_s("%d", &num[i]);
	}

	Max = num[1], Min = num[1], sum = 0;

	for (i = 0; i < numsize; i++) {

		if (Max < num[i])		//최댓값 구하기
			Max = num[i];

		if (Min > num[i])		//최솟값 구하기
			Min = num[i];
				
		sum += num[i];		//합 구하기
	}

	printf("최댓값 : %d\n", Max);
	printf("최솟값 : %d\n", Min);
	printf("정수의 총 합 : %d\n", sum);
}