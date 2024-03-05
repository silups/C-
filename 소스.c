#include<stdio.h>
#include<stdlib.h>

int main() {

	int i, j, min, max, test[10][3] = { 0 }; 
	// 카운트 i, j / 최대 최소 저장 min, max / 비교 자료 초기화 test[]
	
	for (i = 0; i < 10; i++)
		for (j = 0; j < 3; j++)
			test[i][j] = rand() % 101; // 난수 대입
	 

	for (j = 0; j < 3; j++) {

		min = test[j][0]; // 비교를 위한 열의 아무값 대입
		max = test[j][0];

		for (i = 0; i < 10; i++) {
			if (test[i][j] < min) // 최소값 비교
				min = test[i][j];
			else if (test[i][j] > max) // 최대값 비교
				max = test[i][j];
		}

		printf("시험 #%d의 최대점수=%d\n", j + 1, max);
		printf("시험 #%d의 최저점수=%d\n", j + 1, min);
	}
	return 0;
}