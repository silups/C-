#include<stdio.h>

void fibonachiprint(int);

int main(void) {

	int N;

	printf("몇번 째?\n");
	scanf_s("%d", &N);

	fibonachiprint(N);


}

void fibonachiprint(int N) {    // 재귀함수 쓰지말기

	int i, fi1 = 0, fi2 = 1, fi = 0;

	if (N == 1)
		printf("%d ", fi1);
	else
		printf("%d %d ", fi1, fi2);
	
	for (i = 0; i < N; i++) {

		fi = fi1 + fi2;

		printf("%d ", fi);

		fi1 = fi2;
		fi2 = fi;
	}
}