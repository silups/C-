#include <stdio.h>

int main(void) {

	int i, A = 0, Z = 0;

	for (A = 0; A < 10; A++) {

		for (Z = 0; Z < 10; Z++) {

			i = (A * 10 + Z) + (Z * 10 + A);

			if (i == 99)
				printf("A : %d Z : %d\n", A, Z);

		}

	}

}