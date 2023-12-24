#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int heights[n], maximum=0, minimum=101, maximumIndex, minimumIndex;
    for(int i=0; i<n; i++)
    {
        cin >> heights[i];
        if(heights[i] > maximum)
        {
            maximum = heights[i];
            maximumIndex = i;
        }
        if(heights[i] <= minimum)
        {
            minimum = heights[i];
            minimumIndex = i;
        }
    }

    if(maximumIndex > minimumIndex)
    {
        minimumIndex++;
    }

    cout << maximumIndex+(n-1)-minimumIndex << endl;

    return 0;
}
