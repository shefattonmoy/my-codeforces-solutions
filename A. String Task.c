#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char ch[105];
    scanf("%s",&ch);
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            ch[i]=97+ch[i]-65;
        }
        if(ch[i]!='a'&&ch[i]!='e'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u'&&ch[i]!='y')
        {
            printf(".%c",ch[i]);
        }
    }
    return 0;
}
