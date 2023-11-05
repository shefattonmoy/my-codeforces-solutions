#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000020];
    fgets(a,10000020,stdin);
    for(int i=0;a[i]!='\\';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}

