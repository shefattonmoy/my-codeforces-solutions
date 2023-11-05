#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    long long int *a = (long long int *)malloc(n * sizeof(long long int));

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    if (sum < 0) {
        printf("%lld", -sum);
    } else {
        printf("%lld", sum);
    }

    free(a);

    return 0;
}

