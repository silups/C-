#include<stdio.h>

/*int main(void) {

	char arr[100];
	int count=0;

	scanf_s("%s", arr, 100);

	while(arr[count] != '\0')
		count++;

	printf("%d", count);

}

int main(void) {

	char arr[100];
	int count = 0, i;
	char t = 0;		//교환용

	scanf_s("%s", arr, 100);

	while (arr[count] != '\0')	// 길이 계산
		count++;
	

	for (i = 0; i < count / 2; i++) {

		t = arr[i];
		arr[i] = arr[(count- i)- 1];
		arr[(count - i) - 1] = t;
	}

	printf("%s", arr);

}*/

int main(void) {

	char arr[100];
	int count = 0, i;
	char Max=0;

	scanf_s("%s", arr, 100);

	while (arr[count] != '\0')		//길이계산
		count++;

	for (i = 0; i < count; i++) {	//비교

		if (Max < arr[i])
			Max = arr[i];

	}
	printf("%c", Max);
}

