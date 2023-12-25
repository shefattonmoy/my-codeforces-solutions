#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    if(x1 > x2)
    {
        int temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if(x2 > x3)
    {
        int temp = x2;
        x2 = x3;
        x3 = temp;
    }
    if(x1 > x2)
    {
        int temp = x1;
        x1 = x2;
        x2 = temp;
    }

    int distance = x3 - x1;

    cout << distance << endl;

    return 0;
}
