#include <stdio.h>
#include <string.h>
int main()
{
    char S[10000007];
    scanf("%s", S);
    int count[26] = {0};
    int len = strlen(S);
    for (int i = 0; i < len; i++)
    {
        char current = S[i];
        count[current - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}

