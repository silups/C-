/*#include<stdio.h>

int main(void) {

	int N, H, D;
	int area[501] = { 0, };
	int i, j;
	int count = 0, Min = 5000001;

	scanf_s("%d %d", &N, &H);

	for (i = 0; i < N; i++) {

		scanf_s("%d", &D);

		if (i % 2 != 0) {							//시간 초과의 원인		H마다 통과해야 하는 장애물 수를 구하는 다른 방법이 필요
			for (j = 0; j < D; j++) {				//	-> 반복문을 제거하기 위해선 전체가 아닌 일부분만 표시해야 함 
				area[j] += 1;
			}
		}
		else
			for (j = H - 1; j > H - D - 1; j--) {
				area[j] += 1;
			}

		
	}
	for (i = 0; i < H; i++) {
		if (Min > area[i]) {
			Min = area[i];
			count = 0;
		}
		if (Min == area[i])
			count++;
	}
	printf("%d %d", Min, count);
}*/