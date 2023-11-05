#include <stdio.h>
void findMinAndMax(int arr[], int N, int *min, int *max)
{
    *min = *max = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, max;
    findMinAndMax(arr, N, &min, &max);
    printf("%d %d\n", min, max);
    return 0;
}

