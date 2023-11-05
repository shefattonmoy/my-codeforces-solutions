#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a-b>=0)
    {
        int result=a-b;
        printf("%d",a-b);
    }
    else
    {
        int result=0;
        printf("%d",result);
    }
    return 0;
}

