/*#include<stdio.h>

int main(void) {

	int N, H, D;						//N: ����, H: ����, D:��ֹ� ũ��
	int i, j;							//�ݺ���
	int count = 0;				// ��� ����
	int set[2] = { 0, };				// ��ֹ��� �ΰ��� ��������
	int sum = 0;						// ��ֹ� �ΰ��� ��
	int UpD = 0, DownD = 0;				// UpD: sum�� H ���� ū ��� ������ ��, DownD : sum�� H ���� ������� ������ ��
	int MupD = 0, mdownD = 0;			// MupD: UpD�� ���� ū ��, mdownD: DownD�� ���� ���� ��
	
	scanf_s("%d %d", &N, &H);

	mdownD = H;								// �ּڰ� �񱳸� ���� �ʱ�ȭ
	
	for (i = 0; i < N / 2; i++) {
		for(j = 0; j < 2; j++){
			scanf_s("%d", &D);
			set[j] = D;
		}
		sum = set[0] + set[1];				
		UpD = (2 * H) - sum;				// ��ֹ��� ��ĥ �� �ּ� ��� ��
		DownD = H - sum;					// ��ֹ��� ��ġ�� ���� �� �ּ� ��� ��
		

		if (sum >= H)						// �ı��ؾ��ϴ� ��ֹ� �� ī����
			count++;

		if (sum > H) {						//��ֹ��� ��ĥ ��


			if (MupD > UpD)
				MupD = UpD;
		}
		else if(sum < H){					// ��ֹ��� ���� ������ ���� ��


			if (mdownD > DownD)
				mdownD = DownD;
		}
		printf("%d %d %d %d %d %d\n", count, sum, UpD, MupD, DownD, mdownD);
	}
	
	printf("%d %d", count, MupD + mdownD);											// �ð� �ʰ� �ذ��� ���� �迭 ���� ��Ģ�� ã���� ������ ����
}*/