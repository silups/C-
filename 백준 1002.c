#include <stdio.h>

int main(void) {

	int x1, y1, r1, x2, y2, r2, T, i;
	int xy, rr, r;

	scanf_s("%d", &T);

	for (i = 0; i < T; i++) {

		scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		xy = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		rr = (r1 + r2) * (r1 + r2);
		r = (r1 - r2) * (r1 - r2);

		if (xy == 0 && r1 == r2)
			printf("-1\n");
		else if (xy > rr || xy + r1 < r2 || xy + r2 < r1)
			printf("0\n");
		else if (xy == rr || xy == r)
			printf("1\n");	
		else
			printf("2\n");


	}
}