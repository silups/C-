#include<stdio.h>

void DesSort(int arrp[], int len);

int main(void) {

	int arr[7] = { 0, };
	int i;

	for (i = 0; i < 7; i++) {
		printf("ют╥б: ");
		scanf_s("%d", &arr[i]);
	}

	DesSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);
}

void DesSort(int arrp[], int len) {

	int i, j;
	int t = 0;
	for(j = 0; j < len; j++){
		for(i = 0; i < (len - j) - 1; i++){

			if (arrp[i] < arrp[i + 1]) {
				t = arrp[i];
				arrp[i] = arrp[i + 1];
				arrp[i + 1] = t;
			}
		}
	}
}