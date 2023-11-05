#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000005];
    scanf("%s",&S);

    for(int i=0;S[i]!='\0';i++)
    {
        if(S[i]==',')
        {
            printf(" ");
        }
        else if(S[i]>='A' && S[i]<='Z')
        {
            printf("%c",S[i]-'A'+'a');
        }
        else if(S[i]>='a' && S[i]<='z')
        {
            printf("%c",S[i]-'a'+'A');
        }
        else
        {
            printf("%c",S[i]);
        }
    }
    return 0;
}

