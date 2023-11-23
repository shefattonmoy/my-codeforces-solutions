#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int min_operations_to_balance(int n, vector<int>& arr)
{
    int even_count = 0;
    for (int num : arr)
    {
        if (num % 2 == 0)
        {
            even_count++;
        }
    }

    int odd_count = n - even_count;
    int diff = abs(even_count - odd_count);

    if (diff % 2 == 0)
    {
        return diff / 2;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int result = min_operations_to_balance(n, arr);
        cout << result << endl;
    }

    return 0;
}
