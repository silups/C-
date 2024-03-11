#include<stdio.h>

int main(void) {

	/*
	int arr[5] = {1, 2, 3, 4, 5};
	int* ptr = arr;
	int i;

	//1
	for (i = 0; i < 5; i++) {

		*(ptr++) += 2;			//ptr 값이 증가
		printf("%d ", arr[i]);
	}
	//2
	for (i = 0; i < 5; i++) {

		*(ptr + i) += 2;			//ptr 값은 그대로
		printf("%d ", arr[i]);
	}
	//3
	int* ptr1 = &arr[4];
	int sum = 0;

	for (i = 0; i < 5; i++)
		sum += *(ptr1--);

	printf("%d", sum);*/
	//4
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr;
	int* ptr2 = &arr[5];
	int i, t = 0;
	int len = sizeof(arr) / sizeof(int);

	for (i = 0; i < len / 2; i++) {

		t = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 - i);
		*(ptr2 - i) = t;
	}

	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);

}
