#include<stdio.h>

void fibonachiprint(int);

int main(void) {

	int N;

	printf("��� °?\n");
	scanf_s("%d", &N);

	fibonachiprint(N);


}

void fibonachiprint(int N) {    // ����Լ� ��������

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