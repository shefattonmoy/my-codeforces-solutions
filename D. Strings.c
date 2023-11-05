#include <stdio.h>
#include <string.h>
int main() {
    char A[11], B[11];
    scanf("%s", A);
    scanf("%s", B);

    int size_A = strlen(A);
    int size_B = strlen(B);

    printf("%d %d\n", size_A, size_B);

    char concat[21];
    strcpy(concat, A);
    strcat(concat, B);
    printf("%s\n", concat);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);

    return 0;
}


