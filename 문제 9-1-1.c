#include<stdio.h>

int Max(int, int, int);
int Min(int, int, int);

int main(void) {

	int a, b, c;

	printf("���� �� ������ �Է��Ͻÿ�.");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("���� ū ���� %d, ���� ���� ���� %d�Դϴ�.", Max(a, b, c), Min(a, b, c));


}

int Max(int n1, int n2, int n3) {

	int max = 0;

	if (n1 >= n2 && n1 >= n3)
		max = n1;
	else if (n2 >= n1 && n2 >= n3)
		max = n2;
	else
		max = n3;

	return max;
}

int Min(int n1, int n2, int n3) {

	int min = 0;

	if (n1 <= n2 && n1 <= n3)
		min = n1;
	else if (n2 <= n1 && n2 <= n3)
		min = n2;
	else
		min = n3;

	return min;
}