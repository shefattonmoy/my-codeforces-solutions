#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp[n];
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>temp[i];
        a[temp[i]-1] = i+1;
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
