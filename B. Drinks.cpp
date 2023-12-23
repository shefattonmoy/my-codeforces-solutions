#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float sum = 0;
    int p[n];
    for(int i=0; i<n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    cout << sum/n << endl;
    return 0;
}
