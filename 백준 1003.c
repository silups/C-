#include<stdio.h>

/*int fibonacci(int);

int bj1003(void) {        //시간초과로 실패한 함수

    int T, i, N;
   

    scanf_s("%d", &T);

    for (i = 0; i < T; i++) {

        scanf_s("%d", &N);

        if (N == 0)
            printf("1 0\n");
        else
            printf("%d %d\n", fibonacci(N-1), fibonacci(N));

    }

    return 0;
}*/

int main(void) {

    int fibo[41] = { 0, 1,};
    int i, T, N;

     scanf_s("%d", &T);

    for (i = 2; i < 41; i++) {

        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (i = 0; i < T; i++) {

        scanf_s("%d", &N);

        if (N == 0)
            printf("1 0\n");
        else
            printf("%d %d\n", fibo[N - 1], fibo[N]);
    }
}

/*
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}*/