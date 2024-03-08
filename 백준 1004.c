#include<stdio.h>

int main(void) {

	int T, i;
	int x1, y1, x2, y2;
	int n, j;
	int cx, cy, r;
	int xy1 = 0, xy2 = 0, rr = 0;
	int count = 0;

	scanf_s("%d", &T);

	for (i = 0; i < T; i++) {

		count = 0;
		scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf_s("%d", &n);

		for (j = 0; j < n; j++) {

			scanf_s("%d %d %d", &cx, &cy, &r);

			rr = r * r;
			xy1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
			xy2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);

			if (xy1 < rr || xy2 < rr)
				count++;

		}

		printf("%d\n", count);

	}

}