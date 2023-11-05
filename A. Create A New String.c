#include<stdio.h>
#include<string.h>
int main()
{
    char s[1020],t[1020];
    scanf("%s %s",&s,&t);
    int lengthOfS=strlen(s);
    int lengthOfT=strlen(t);
    printf("%d %d\n",lengthOfS,lengthOfT);
    printf("%s %s\n",s,t);
    return 0;
}

