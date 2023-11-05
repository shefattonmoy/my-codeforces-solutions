#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long max_sum = 0;

    for (int i = 0; i < k; i++)
    {
        int max_element = -1;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > 0 && (max_element == -1 || a[j] > a[max_element]))
            {
                max_element = j;
            }
        }
        if (max_element == -1)
        {
            break;
        }
        max_sum += a[max_element];
        a[max_element] = -1;
    }
    printf("%lld\n", max_sum);
    return 0;
}
