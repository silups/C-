#include<stdio.h>
#include<stdlib.h>

int main() {

	int i, j, min, max, test[10][3] = { 0 }; 
	// ī��Ʈ i, j / �ִ� �ּ� ���� min, max / �� �ڷ� �ʱ�ȭ test[]
	
	for (i = 0; i < 10; i++)
		for (j = 0; j < 3; j++)
			test[i][j] = rand() % 101; // ���� ����
	 

	for (j = 0; j < 3; j++) {

		min = test[j][0]; // �񱳸� ���� ���� �ƹ��� ����
		max = test[j][0];

		for (i = 0; i < 10; i++) {
			if (test[i][j] < min) // �ּҰ� ��
				min = test[i][j];
			else if (test[i][j] > max) // �ִ밪 ��
				max = test[i][j];
		}

		printf("���� #%d�� �ִ�����=%d\n", j + 1, max);
		printf("���� #%d�� ��������=%d\n", j + 1, min);
	}
	return 0;
}