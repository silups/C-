/*#include<stdio.h>

int main(void) {

	int T, i, j, l;
	int N, W;
	int area[2][10001] = { 0, };
	int count = 0, sum;


	scanf_s("%d", &T);															//테이블 케이스

	for (l = 0; l < T; l++) {

		scanf_s("%d %d", &N, &W);												// N: 구역수, W:소대원 수
		count = 0;

		for(i = 0; i<2; i++){
			for (j = 0; j < N; j++) {
			
				scanf_s("%d", &area[i][j]);										// 각 구역별 적 수 입력
			}
		}

		for (i = 0; i < 2; i++) {

			for (j = 0; j < N; j++) {

				sum = area[i][j] + area[i][j + 1];
				if (j == N - 1)									//원타곤
					sum = area[i][j] + area[i][0];

				if (sum <= W) {									//옆으로 연결
					area[i][j] = 0, area[i][j + 1] = 0;			//이미 사용한 칸 초기화
					j++;
					count++;
				}
			}
		
		}

		for (j = 0; j < N; j++) {

			sum = area[0][j] + area[1][j];
			
			if(area[0][j] != 0 && area[1][j] != 0){
				if (sum <= W) {								//위로 연결
					count++;
				}
			}
		}


		
		printf("%d", (N * 2) - count);
	}
	return 0;
	https://hongjw1938.tistory.com/47 나중에 다시 도전하자...
}*/
