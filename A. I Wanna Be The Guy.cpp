#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,flag=0;
    cin >> n >> p;
    int a[p];
    for(int i=0; i<p; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    int b[q];
    for(int i=0; i<q; i++)
    {
        cin >> b[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<p; j++)
        {
            if(i == a[j])
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if(flag == 0)
        {
            for(int j=0; j<q; j++)
            {
                if(i == b[j])
                {
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    if(flag == 1)
    {
        cout << "I become the guy." <<endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
