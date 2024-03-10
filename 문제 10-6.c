#include<stdio.h>

int main(void) {

	int sec, h = 0, m = 0;

	scanf_s("%d", &sec);

	if (sec >= 3600) {
		h = sec / 3600;
		sec = sec % 3600;
	}
	if (sec >= 60) {
		m = sec / 60;
		sec = sec % 60;
	}
	printf("%d시간 %d분 %d초", h, m, sec);
}