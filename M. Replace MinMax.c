#include <stdio.h>
void swapMinMax(int arr[], int n)
{
    int min_val = arr[0], max_val = arr[0];
    int min_index = 0, max_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_index = i;
        }
        if (arr[i] > max_val)
        {
            max_val = arr[i];
            max_index = i;
        }
    }
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;
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

    swapMinMax(arr, N);

    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
        if (i < N - 1)
        {
            printf(" ");
        }
    }
    return 0;
}
