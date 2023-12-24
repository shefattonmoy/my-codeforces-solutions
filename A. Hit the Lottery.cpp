#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int answer = n / 100;
    int left = n % 100;

    answer += left / 20;
    left = left % 20;

    answer += left / 10;
    left = left % 10;

    answer += left / 5;
    left = left % 5;

    answer += left / 1;

    cout << answer << endl;
    return 0;
}
