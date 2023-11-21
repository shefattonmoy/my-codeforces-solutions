#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int balloons[26] = {0};
        int totalBalloons = 0;

        for (int i = 0; i < n; ++i)
        {
            int problemIndex = s[i] - 'A';

            if (balloons[problemIndex] == 0)
            {

                totalBalloons += 2;
                balloons[problemIndex] = 1;
            }
            else
            {
                totalBalloons += 1;
            }
        }
        cout << totalBalloons << endl;
    }
    return 0;
}

