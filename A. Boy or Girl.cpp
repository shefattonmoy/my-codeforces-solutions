#include<bits/stdc++.h>
using namespace std;
int main()
{
    int answer=0;
    char s[100];
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        int flag=0;
        for(int j=i-1;j>=0;j--)
        {
            if(s[i]==s[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            answer++;
        }
    }

    if(answer%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}
