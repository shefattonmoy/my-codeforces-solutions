#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[101];
    cin >> s;
    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s,s+n);
    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }

    if(count==26)
    {
        cout<< "YES" <<endl;
    }
    else
    {
        cout<< "NO" <<endl;
    }

    return 0;
}
