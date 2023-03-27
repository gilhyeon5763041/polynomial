#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_DEGREE 100

int main() {
    int A[MAX_DEGREE + 1] = { 0 };  
    int B[MAX_DEGREE + 1] = { 0 };  
    int C[2 * MAX_DEGREE + 1] = { 0 };  
    int m, n, i, j;

    printf("다항식의 차수를 입력하시오");
    scanf("%d", &m);
    printf("다항식의 계수를 높은 순서대로 입력하시오");
    for (i = 0; i <= m; i++) {
        scanf("%d", &A[i]);
    }

    printf("다항식의 차수를 입력하시오 ");
    scanf("%d", &n);
    printf("다항식의 계수를 높은 순서대로 입력하시오");
    for (i = 0; i <= n; i++) {
        scanf("%d", &B[i]);
    }
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            C[i + j] += A[i] * B[j];
        }
    }
    printf("두 다항식의 곱:\n");
    for (i = 0; i <= m + n; i++) {
        printf("%d", C[i]);
    }
    printf("\n");

    return 0;
}