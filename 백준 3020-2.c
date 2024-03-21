#include<stdio.h>

int main(void) {

	int N, H;
	int D;
	int i, j;
	int count = 0, Min = 5000001;
	int sum = 0;
	int area[500001] = { 0, };
	
	scanf_s("%d %d", &N, &H);
	
	
	for (i = 0; i < N; i++) {

		scanf_s("%d", &D);

		if (i & 1 == 1) {
			area[0]++;
			area[D]--;
		}
		else 
			area[H - D]++;
	}
	for (i = 0; i < H; i++) {
		sum += area[i];
		area[i] = sum;
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
}