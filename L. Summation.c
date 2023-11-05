#include <stdio.h>
long long sumArray(int* A, int N, int index) {
    if (index == N) {
        return 0;
    }
    return A[index] + sumArray(A, N, index + 1);
}
int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    long long result = sumArray(A, N, 0);
    printf("%lld\n", result);
    return 0;
}
