#include<stdio.h>
int main() {
    int X;
    double P;
    scanf("%d %lf", &X, &P);
    double original_price = P / (1.0 - X / 100.0);
    printf("%.2lf\n", original_price);
    return 0;
}
