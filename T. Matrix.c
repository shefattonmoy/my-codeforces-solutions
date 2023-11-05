#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sumPrimaryDiagonal = 0;
    int sumSecondaryDiagonal = 0;
    for (int i = 0; i < n; i++) {
        sumPrimaryDiagonal += a[i][i];
        sumSecondaryDiagonal += a[i][n - 1 - i];
    }

    int absoluteDifference = abs(sumPrimaryDiagonal - sumSecondaryDiagonal);

    printf("%d\n", absoluteDifference);

    return 0;
}
