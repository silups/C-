/*#include<stdio.h>

int main(void) {

	int N, H, D;
	int area[501] = { 0, };
	int i, j;
	int count = 0, Min = 5000001;

	scanf_s("%d %d", &N, &H);

	for (i = 0; i < N; i++) {

		scanf_s("%d", &D);

		if (i % 2 != 0) {							//�ð� �ʰ��� ����		H���� ����ؾ� �ϴ� ��ֹ� ���� ���ϴ� �ٸ� ����� �ʿ�
			for (j = 0; j < D; j++) {				//	-> �ݺ����� �����ϱ� ���ؼ� ��ü�� �ƴ� �Ϻκи� ǥ���ؾ� �� 
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