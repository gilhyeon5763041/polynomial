#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_DEGREE 100

int main() {
    int A[MAX_DEGREE + 1] = { 0 };  
    int B[MAX_DEGREE + 1] = { 0 };  
    int C[2 * MAX_DEGREE + 1] = { 0 };  
    int m, n, i, j;

    printf("���׽��� ������ �Է��Ͻÿ�");
    scanf("%d", &m);
    printf("���׽��� ����� ���� ������� �Է��Ͻÿ�");
    for (i = 0; i <= m; i++) {
        scanf("%d", &A[i]);
    }

    printf("���׽��� ������ �Է��Ͻÿ� ");
    scanf("%d", &n);
    printf("���׽��� ����� ���� ������� �Է��Ͻÿ�");
    for (i = 0; i <= n; i++) {
        scanf("%d", &B[i]);
    }
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            C[i + j] += A[i] * B[j];
        }
    }
    printf("�� ���׽��� ��:\n");
    for (i = 0; i <= m + n; i++) {
        printf("%d", C[i]);
    }
    printf("\n");

    return 0;
}