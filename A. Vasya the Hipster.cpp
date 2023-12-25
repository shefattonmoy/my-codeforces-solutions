#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int differentSocks = min(a,b);
    int sameSocks = (max(a,b)-differentSocks)/2;

    cout << differentSocks << " " << sameSocks << endl;

    return 0;
}
