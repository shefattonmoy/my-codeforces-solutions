#include <stdio.h>

int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    // Calculate the maximum number of Katryoshkas using different combinations
    long long max_katryoshkas = 0;

    // Find the minimum of n/2, m, and k
    long long min_combination_1 = (n / 2 < m) ? n / 2 : m;
    min_combination_1 = (min_combination_1 < k) ? min_combination_1 : k;

    // Find the minimum of n/2, (m - min_combination_1), and (k - min_combination_1)
    long long remaining_n = n - 2 * min_combination_1;
    long long remaining_m = m - min_combination_1;
    long long remaining_k = k - min_combination_1;

    long long min_combination_2 = (remaining_n / 2 < remaining_m) ? remaining_n / 2 : remaining_m;
    min_combination_2 = (min_combination_2 < remaining_k) ? min_combination_2 : remaining_k;

    // Find the minimum of n, (m - min_combination_2), and (k - min_combination_2)
    remaining_n = n - 2 * min_combination_2;
    remaining_m = m - min_combination_2;
    remaining_k = k - min_combination_2;

    long long min_combination_3 = (remaining_n < remaining_m) ? remaining_n : remaining_m;
    min_combination_3 = (min_combination_3 < remaining_k) ? min_combination_3 : remaining_k;

    max_katryoshkas = min_combination_1 + min_combination_2 + min_combination_3;

    printf("%lld\n", max_katryoshkas);

    return 0;
}


