/*#include<stdio.h>

int main(void) {

	int N, H, D;						//N: 길이, H: 높이, D:장애물 크기
	int i, j;							//반복문
	int count = 0;				// 결과 인출
	int set[2] = { 0, };				// 장애물을 두개씩 묶기위함
	int sum = 0;						// 장애물 두개의 합
	int UpD = 0, DownD = 0;				// UpD: sum이 H 보다 큰 경우 구간의 수, DownD : sum이 H 보다 작은경우 구간의 수
	int MupD = 0, mdownD = 0;			// MupD: UpD중 가장 큰 값, mdownD: DownD중 가장 작은 값
	
	scanf_s("%d %d", &N, &H);

	mdownD = H;								// 최솟값 비교를 위한 초기화
	
	for (i = 0; i < N / 2; i++) {
		for(j = 0; j < 2; j++){
			scanf_s("%d", &D);
			set[j] = D;
		}
		sum = set[0] + set[1];				
		UpD = (2 * H) - sum;				// 장애물이 겹칠 때 최소 경로 수
		DownD = H - sum;					// 장애물이 겹치지 않을 때 최소 경로 수
		

		if (sum >= H)						// 파괴해야하는 장애물 수 카운팅
			count++;

		if (sum > H) {						//장애물이 겹칠 때


			if (MupD > UpD)
				MupD = UpD;
		}
		else if(sum < H){					// 장애물이 없는 구간이 생길 때


			if (mdownD > DownD)
				mdownD = DownD;
		}
		printf("%d %d %d %d %d %d\n", count, sum, UpD, MupD, DownD, mdownD);
	}
	
	printf("%d %d", count, MupD + mdownD);											// 시간 초과 해결을 위해 배열 없이 규칙을 찾고자 했으나 실패
}*/