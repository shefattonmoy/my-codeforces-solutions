#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,ans;
    cin>>a>>b>>c;
    x=b/2;
    y=c/4;
    z=min(a,min(x,y));
    ans=z+(2*z)+(4*z);
    cout<<ans<<endl;
    return 0;
}
