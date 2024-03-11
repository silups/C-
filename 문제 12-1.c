#include<stdio.h>

/*int cp12_1_1(void) {

	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
}*/

int main(void) {

	int num1 = 10, num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* T = 0;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	//ptr1 = &num2, ptr2 = &num1;

	T = ptr1;
	ptr1 = ptr2;
	ptr2 = T;

	printf("%d %d", (*ptr1), (*ptr2));


}