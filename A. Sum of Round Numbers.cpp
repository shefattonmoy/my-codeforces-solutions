#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int roundNumbers[10];

        for (int i = 1; n > 0; i *= 10)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                roundNumbers[count++] = digit * i;
            }
            n /= 10;
        }

        cout << count << endl;

        for(int i=0; i<count; i++)
        {
            cout << roundNumbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
