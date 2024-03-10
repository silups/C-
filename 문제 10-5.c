#include<stdio.h>

int main(void) {

	int PN , i, N, count1 = 0, count2 = 0;

	scanf_s("%d", &N);
	
	for(PN = 2; ; PN++){
		count1 = 0;
		for (i = 2; i < PN; i++) {
			
			
	
			if (PN % i == 0)
				count1++;
		}
		if (count1 == 0) {
			printf("%d ", PN);
			count2++;
		}
		if (count2 >= N)
			break;

	}
}
