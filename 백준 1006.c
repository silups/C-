#include<stdio.h>

/*int bj(void) {

	int T, i, j, count = 0;
	int N, W;
	int area1[100001] = {0,};
	int area2[100001] = {0,};
	int sum1 = 0, sum2 = 0, sum3 = 0, Min = 0;

	scanf_s("%d", &T);

	for (i = 0; i < T; i++) {			//�׽�Ʈ ���̽�

		count = 0;

		scanf_s("%d %d", &N, &W);		// ���� ��, �Ҵ�� ��

		for (j = 0; j < N; j++)
			scanf_s("%d", &area1[j]);

		for (j = 0; j < N; j++)
			scanf_s("%d", &area2[j]);

		Min = area1[0];

		for (j = 0; j < N; j++) {		// �ּ� �� ���ϱ�

			if (Min > area1[j])
				Min = area1[j];
			if (Min > area2[j])
				Min = area2[j];
		}

		for (j = 0; j < N; j++) {		// Ư���δ� �� ���

			if (area1[j] == 0) {
				continue;
			}

			sum1 = area1[j] + area1[j + 1];
			sum2 = area1[j] + area2[j];
			sum3 = area1[j] + area1[j - 1];
			if (j == 0)
				sum3 = area1[0] + area1[N - 1];		//�����̱� ������ 1�� N -1�� ������
			else if (j == N - 1)
				sum1 = area1[0] + area1[N - 1];


			if (((((sum1 > sum2 && sum1 > sum3) || (sum1 < sum2 && sum2 > W) || (sum1 < sum3 && sum3 > W)) && (sum1 <= W)) && (!(sum1 < sum2 && sum2 <= W))) && (!(sum1 < sum3 && sum3 <= W))) {		// �����ʰ� ����
				count++;

				if (j == N - 1) {
					area1[0] = 0;
					area1[N - 1] = 0;
				}
				else {
					area1[j] = 0;
					area1[j + 1] = 0;
				}
			}
			else if (((((sum2 > sum1 && sum2 > sum3) || (sum2 < sum1 && sum1 > W) || (sum2 < sum3 && sum3 > W)) && (sum2 <= W)) && (!(sum2 < sum1 && sum1 <= W))) && (!(sum2 < sum3 && sum3 <= W))) {		// ���ʰ� ����
				count++;

				area1[j] = 0;
				area2[j] = 0;
			}
			else if (((((sum3 > sum2 && sum3 > sum1) || (sum3 < sum2 && sum2 > W) || (sum3 < sum1 && sum1 > W)) && (sum3 <= W)) && (!(sum3 < sum2 && sum2 <= W))) && (!(sum3 < sum1 && sum1 <= W))) {		// ���ʰ� ����
				count++;

				if (j == 0) {
					area1[0] = 0;
					area1[N - 1] = 0;
				}
				else {
					area1[j] = 0;
					area1[j - 1] = 0;
				}
			}
			else {										// ���� X
				count++;
				area1[j] = 0;						// �̹� Ŀ���� ������ 0���� �ʱ�ȭ�� �浹�� ����
			}


		}

		for (j = 0; j < N; j++) {		// 2�� Ư���δ� �� ���

			if (area2[j] == 0) {
				continue;
			}

			sum1 = area2[j] + area2[j + 1];
			sum2 = area2[j] + area1[j];
			sum3 = area2[j] + area2[j - 1];
			if (j == 0)
				sum3 = area2[0] + area2[N - 1];		//�����̱� ������ 1�� N -1�� ������
			else if (j == N - 1)
				sum1 = area2[0] + area2[N - 1];


			if (((((sum1 > sum2 && sum1 > sum3) || (sum1 < sum2 && sum2 > W) || (sum1 < sum3 && sum3 > W)) && (sum1 <= W)) && (!(sum1 < sum2 && sum2 <= W))) && (!(sum1 < sum3 && sum3 <= W))) {		// �����ʰ� ����
				count++;

				if (j == N - 1) {
					area2[0] = 0;
					area2[N - 1] = 0;
				}
				else {
					area2[j] = 0;
					area2[j + 1] = 0;
				}
			}
			else if (((((sum2 > sum1 && sum2 > sum3) || (sum2 < sum1 && sum1 > W) || (sum2 < sum3 && sum3 > W)) && (sum2 <= W)) && (!(sum2 < sum1 && sum1 <= W))) && (!(sum2 < sum3 && sum3 <= W))) {		// �Ʒ��ʰ� ����
				count++;

				area2[j] = 0;
				area1[j] = 0;
			}
			else if (((((sum3 > sum2 && sum3 > sum1) || (sum3 < sum2 && sum2 > W) || (sum3 < sum1 && sum1 > W)) && (sum3 <= W)) && (!(sum3 < sum2 && sum2 <= W))) && (!(sum3 < sum1 && sum1 <= W))) {		// ���ʰ� ����
				count++;

				if (j == 0) {
					area2[0] = 0;
					area2[N - 1] = 0;
				}
				else {
					area2[j] = 0;
					area2[j - 1] = 0;
				}
			}
			else {										// ���� X
				count++;
				area2[j] = 0;						// �̹� Ŀ���� ������ 0���� �ʱ�ȭ�� �浹�� ����
			}
		}
		printf("%d", count);
	}
}*/