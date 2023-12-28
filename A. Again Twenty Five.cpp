#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 1;
    int base = 5;
    int modulo = 100;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % modulo;
        }
        base = (base * base) % modulo;
        n /= 2;
    }

    if (result < 10)
    {
        cout << "0";
    }
    cout << result << endl;

    return 0;
}
