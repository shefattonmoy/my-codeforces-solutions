#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char c1[100],c2[100],len1,len2,i,cmp;
    gets(c1);
    gets(c2);
    len1=strlen(c1);
    len2=strlen(c2);
    for(i=0;i<len1;i++)
    {
        if(c1[i]>=65&&c1[i]<=90)
        {
            c1[i]='a'+c1[i]-'A';
        }
    }

    for(i=0;i<len2;i++)
    {
        if(c2[i]>=65&&c2[i]<=90)
        {
            c2[i]='a'+c2[i]-'A';
        }
    }

    cmp=strcasecmp(c1,c2);

    if(cmp>0)
    {
        printf("1\n");
    }
    else if(cmp<0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
