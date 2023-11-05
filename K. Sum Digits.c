#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);

    char digit;
    int sum = 0;

    for (int i=0;i<N;i++) {
        scanf(" %c", &digit);
        sum += (digit - '0');
    }
    printf("%d\n", sum);
    return 0;
}

