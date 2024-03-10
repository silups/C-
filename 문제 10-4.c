#include<stdio.h>

int main(void) {

	int money = 3500, cream = 1, shrimp = 1, coke = 1;


	printf("현재 당신이 소유하고 있는 금액 : ");
	scanf_s("%d", &money);

	for (cream = 1; cream < money/400; cream++) {
		for (shrimp = 1; shrimp < money/700; shrimp++) {
			for (coke = 1; coke < money/400; coke++) {

				if (cream * 500 + shrimp * 700 + coke * 400 == money)
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", cream, shrimp, coke);
			}
		}
	}
	printf("어떻게 구입하시겠습니까?");

}