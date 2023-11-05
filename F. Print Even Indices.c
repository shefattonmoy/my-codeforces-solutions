#include<stdio.h>
void printEvenIndicesReversed(int* A, int N, int index)
{
    if (index < N)
    {
        if (index % 2 == 0)
        {
            printEvenIndicesReversed(A, N, index + 2);
            printf("%d ", A[index]);
        }
        else
        {
            printEvenIndicesReversed(A, N, index + 2);
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    printEvenIndicesReversed(A, N, 0);
    printf("\n");
    return 0;
}
