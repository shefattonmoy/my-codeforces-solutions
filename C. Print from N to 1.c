#include<stdio.h>
void printN(int i)
{
    if(i==0)
        return;
    printf("%d ",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printN(i);
    }

    return 0;
}
