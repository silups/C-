#include<stdio.h>

/*int main(void) {

	int arr[3][9] = { 0, };
		
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {

			arr[i][j] = (i + 2) * (j + 1);
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
	
	int A[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};
	int B[4][2] = { 0, };

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {

			B[i][j] = A[j][i];
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {

			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {

			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
}

int main(void) {

	int grade[5][5] = { 0, };
	int i, j, sum = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf_s("%d", &grade[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 4; j++) {
			sum += grade[i][j];
			grade[i][4] = sum;
		}
	}
	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 4; j++) {
			sum += grade[j][i];
			grade[4][i] = sum;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", grade[i][j]);
		}
		printf("\n");
	}
}*/