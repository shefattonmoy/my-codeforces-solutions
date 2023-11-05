#include <stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int count[M + 1] = {0};

    for (int i = 0; i < N; i++) {
        int number;
        scanf("%d", &number);
        count[number]++;
    }


    for (int i = 1; i <= M; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}

