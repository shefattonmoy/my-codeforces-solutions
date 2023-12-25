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

        int a[50];
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        bool possible = true;

        for(int i = 1; i < n; ++i)
        {
            if (a[i] - a[i - 1] > 1)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
