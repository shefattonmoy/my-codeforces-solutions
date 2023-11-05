#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int min, mid, max;
    if (A <= B && A <= C)
    {
        min = A;
        if (B <= C)
        {
            mid = B;
            max = C;
        }
        else
        {
            mid = C;
            max = B;
        }
    }
    else if (B <= A && B <= C)
    {
        min = B;
        if (A <= C)
        {
            mid = A;
            max = C;
        }
        else
        {
            mid = C;
            max = A;
        }
    }
    else
    {
        min = C;
        if (A <= B)
        {
            mid = A;
            max = B;
        }
        else
        {
            mid = B;
            max = A;
        }
    }
    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d\n", A, B, C);
    return 0;
}

