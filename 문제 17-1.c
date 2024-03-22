#include<stdio.h>


void MaxAndMin(int*, int ,int**, int**);

int main(void) {

	int* maxPtr = 0;
	int* minPtr = 0;
	int arr[5] = { 0, };
	int i;

	for (i = 0; i < 5; i++) 
		scanf_s("%d", &arr[i]);
	
	MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);

	printf("%d %d", *maxPtr, *minPtr);


}
void MaxAndMin(int* nums, int S,int** MaxP, int** MinP) {

	*MaxP = &nums[0];
	*MinP = &nums[0];

	for (int i = 0; i < S; i++) {
		if (**MaxP < nums[i])
			*MaxP = &nums[i];
		if (**MinP > nums[i])
			*MinP = &nums[i];

	}
	


}