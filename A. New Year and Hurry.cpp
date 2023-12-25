#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int totalTime = 240 - k;
    int solved = 0;

    for(int i=1; i<=n; i++)
    {
        int timeRequired = 5 * i;

        if(totalTime >= timeRequired)
        {
            totalTime -= timeRequired;
            solved++;
        }
        else
        {
            break;
        }
    }

    cout << solved << endl;

    return 0;
}
