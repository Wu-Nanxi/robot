#include <stdio.h>

/* 合并 A、B 到 C，返回 C 的长度 */
int merge(int A[], int lenA, int B[], int lenB, int C[]) {
    int i = 0, j = 0, k = 0;

    /* 两边都还有元素时，谁小拿谁 */
    while (i < lenA && j < lenB) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    /* A 还剩，全搬 */
    while (i < lenA) {
        C[k++] = A[i++];
    }
    /* B 还剩，全搬 */
    while (j < lenB) {
        C[k++] = B[j++];
    }

    return k;   /* k 就是合并后的长度 */
}

int main(void) {
    int A[] = {10, 20, 30, 50};
    int B[] = {15, 25, 40, 60};
    int C[20];   /* 够大就行 */

    int lenC = merge(A, 4, B, 4, C);

    printf("合并结果：");
    for (int i = 0; i < lenC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n长度=%d\n", lenC);

    return 0;
}
