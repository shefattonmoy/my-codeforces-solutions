#include<stdio.h>
int main()
{
    int n,i,result;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        result=n*i;
        printf("%d * %d = %d\n",n,i,result);
    }
    return 0;
}

