#include<stdio.h>

int main(void) {

	int num[5] = { 0, };
	int i, Max, Min, sum;
	int numsize = sizeof(num) / sizeof(int); // �迭 num�� ����



	for (i = 0; i < numsize; i++) {

		scanf_s("%d", &num[i]);
	}

	Max = num[1], Min = num[1], sum = 0;

	for (i = 0; i < numsize; i++) {

		if (Max < num[i])		//�ִ� ���ϱ�
			Max = num[i];

		if (Min > num[i])		//�ּڰ� ���ϱ�
			Min = num[i];
				
		sum += num[i];		//�� ���ϱ�
	}

	printf("�ִ� : %d\n", Max);
	printf("�ּڰ� : %d\n", Min);
	printf("������ �� �� : %d\n", sum);
}