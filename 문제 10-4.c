#include<stdio.h>

int main(void) {

	int money = 3500, cream = 1, shrimp = 1, coke = 1;


	printf("���� ����� �����ϰ� �ִ� �ݾ� : ");
	scanf_s("%d", &money);

	for (cream = 1; cream < money/400; cream++) {
		for (shrimp = 1; shrimp < money/700; shrimp++) {
			for (coke = 1; coke < money/400; coke++) {

				if (cream * 500 + shrimp * 700 + coke * 400 == money)
					printf("ũ���� %d��, ����� %d��, �� �� %d��\n", cream, shrimp, coke);
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?");

}