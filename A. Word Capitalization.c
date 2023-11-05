#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,l;
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[0]>=97 && a[0]<=122)
        {
            a[0]=65+a[0]-97;
        }
    }
    printf("%s",a);
    return 0;
}
