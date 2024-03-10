#include<stdio.h>

int main(void) {

	char gt[] = { "Good time"};
	char gt2[] = { '"', 'G','o', 'o', 'd', ' ', 't', 'i', 'm', 'e', '"'};
	int gts = sizeof(gt) / sizeof(char), gts2 = sizeof(gt2) / sizeof(char);
	int i;

	for (i = 0; i < gts; i++)
		printf("%c", gt[i]);
	
	printf("\n");
	for (i = 0; i < gts2; i++)
		printf("%c", gt2[i]);

}