#include<bits/stdc++.h>
using namespace std;
void capital(char s[100])
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 97)
        {
            s[i] = s[i] - 32;
        }
    }
}
void small(char s[100])
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }
}
int main()
{
    char s[100];
    cin >> s;
    int upperCase = 0, lowerCase = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 97)
        {
            lowerCase++;
        }
        else
        {
            upperCase++;
        }
    }
    if(upperCase > lowerCase)
    {
        capital(s);
    }
    else
    {
        small(s);
    }

    cout << s << endl;

    return 0;
}
