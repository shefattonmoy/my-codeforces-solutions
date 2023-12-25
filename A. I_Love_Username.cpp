#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int maximum = a[0];
    int minimum = a[0];

    for(int i=0; i<n; i++)
    {
        if(a[i] > maximum)
        {
            maximum = a[i];
            count++;
        }
        if(a[i] < minimum)
        {
            minimum = a[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
