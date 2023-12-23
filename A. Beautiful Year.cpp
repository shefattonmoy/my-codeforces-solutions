#include <bits/stdc++.h>
using namespace std;
bool hasDistinctDigits(int year)
{
    bool digits[10] = {false};

    while (year > 0)
    {
        int digit = year % 10;

        if (digits[digit])
        {
            return false;
        }

        digits[digit] = true;
        year /= 10;
    }

    return true;
}

int main()
{
    int y;
    cin >> y;
    while (!hasDistinctDigits(++y));
    cout << y << endl;
    return 0;
}
