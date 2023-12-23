#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;

    int l = s.length();

    for(int i=0; i<l/2; i++)
    {
        char temp = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = temp;
    }

    if(s==t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
