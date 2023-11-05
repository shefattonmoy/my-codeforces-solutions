#include<stdio.h>
#include<string.h>
int main()
{
    char x[50],y[50];
    scanf("%s %s",&x,&y);
    int value=strcmp(x,y);
    if(value<0)
    {
        printf("%s",x);
    }
    else if(value>0)
    {
        printf("%s",y);
    }
    else
    {
        printf("%s",x);
    }
    return 0;
}

