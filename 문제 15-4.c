/*#include<stdio.h>

int main(void) {

	char Palin[100];
	int i = 0, count = 0, len = 0, sum = 0;
	

	printf("문자열 입력: ");
	scanf_s("%s", Palin, 100);

	while (Palin[i] != 0) {
		len++;
		i++;
	}
	
	len--;

	for (i = 0; i < len / 2; i++) {

		sum = Palin[i] - Palin[len];
		if (sum < 0)
			sum = sum * -1;

		if (Palin[i] != Palin[len] && sum != 32)
			count++;

		len--;
	}
	if (count == 0)
		printf("회문 입니다.");
	else
		printf("회문이 아닙니다.");
}*/