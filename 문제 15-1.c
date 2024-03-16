/*#include<stdio.h>

void odd(int*, int);
void even(int*, int);

int main(void) {

	int arr[10] = { 0, };
	int i, len;

	for (i = 0; i < 10; i++) {
		printf("ÀÔ·Â: ");
		scanf_s("%d", &arr[i]);
	}
	
	len = sizeof(arr) / sizeof(int);

	odd(arr,len);
	even(arr, len);


}
void odd(int* n, int l) {

	int count = 0;
	printf("È¦¼ö Ãâ·Â: ");
	for (int i = 0; i < l; i++) {
		if (n[i] % 2 != 0) {
			count++;
			if (count == 1)
				printf("%d", n[i]);
			else
				printf(", %d", n[i]);
		}
	}
	printf("\n");
}
void even(int* n, int l) {

	int count = 0;
	printf("Â¦¼ö Ãâ·Â: ");
	for (int i = 0; i < l; i++) {
		if (n[i] % 2 == 0) {
			count++;
			if (count == 1)
				printf("%d", n[i]);
			else
				printf(", %d", n[i]);
		}
	}
	printf("\n");
}*/