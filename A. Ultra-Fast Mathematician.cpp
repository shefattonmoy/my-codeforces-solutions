#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;

    int n = a.size();
    string result;

    for(int i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            result += '1';
        }
        else
        {
            result += '0';
        }
    }

    cout << result << endl;

    return 0;
}
