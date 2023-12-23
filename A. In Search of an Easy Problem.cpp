#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    string result;

    for(int i=0; i<n; i++)
    {
        if(a[i] == 1)
        {
            result = "HARD";
            break;
        }
        else
        {
            result = "EASY";
        }
    }

    cout<<result<<endl;

    return 0;
}
