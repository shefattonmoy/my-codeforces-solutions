#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,steps;
    cin>>n;
    steps=n/5;
    if(n%5==0)
    {
        cout<<steps<<endl;
    }
    else
    {
        cout<<steps+1<<endl;
    }
    return 0;
}
