#include<stdio.h>

double CelToFah(double);
double FahToCel(double);

int main(void) {

	char cho;
	double temper;

	printf("������ ��ȯ(C) ȭ���� ��ȯ(F)\n �Է��Ͻÿ� : ");

	scanf_s("%c", &cho);

	printf("�µ��� �Է��Ͻÿ� : ");

	scanf_s("%lf", &temper);

	if (cho == 'C')
		printf("���� %f ��", FahToCel(temper));
	else if (cho == 'F')
		printf("ȭ�� %f ��", CelToFah(temper));
	else
		printf("Error!");
}

double CelToFah(double C) {
	return 1.8 * C + 32;
}

double FahToCel(double F) {
	return (F - 32) / 1.8;
}