#include<stdio.h>

double CelToFah(double);
double FahToCel(double);

int main(void) {

	char cho;
	double temper;

	printf("¼·¾¾·Î º¯È¯(C) È­¾¾·Î º¯È¯(F)\n ÀÔ·ÂÇÏ½Ã¿À : ");

	scanf_s("%c", &cho);

	printf("¿Âµµ¸¦ ÀÔ·ÂÇÏ½Ã¿À : ");

	scanf_s("%lf", &temper);

	if (cho == 'C')
		printf("¼·¾¾ %f µµ", FahToCel(temper));
	else if (cho == 'F')
		printf("È­¾¾ %f µµ", CelToFah(temper));
	else
		printf("Error!");
}

double CelToFah(double C) {
	return 1.8 * C + 32;
}

double FahToCel(double F) {
	return (F - 32) / 1.8;
}