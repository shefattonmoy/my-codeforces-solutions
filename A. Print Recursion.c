#include <stdio.h>
void printLoveRecursion(int N) {
    if (N > 0) {
        printf("I Love Recursion\n");
        printLoveRecursion(N - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 1 && N <= 100) {
        printLoveRecursion(N);
    } else {
        printf("Input out of valid range.\n");
    }
    return 0;
}
