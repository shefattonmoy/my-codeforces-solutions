#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n,w,total;
    cin >> k >> n>> w;
    total = (w*(k+w*k))/2;
    if(total > n)
    {
        cout<<total-n<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
