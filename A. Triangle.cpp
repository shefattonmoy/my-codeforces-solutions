#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int num[4];
    for (int i = 0; i < 4; i++)
        scanf("%d", &num[i]);
    sort(num, num + 4);

    if (num[0] + num[1] > num[2] || num[1] + num[2] > num[3])
    {
        cout << "TRIANGLE" << endl;
    }
    else if (num[0] + num[1] == num[2] || num[1] + num[2] == num[3])
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
