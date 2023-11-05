#include<stdio.h>
void printN(int i)
{
    if(i==0)
        return;
    printf("%d\n",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printN(i);
    }
    return 0;
}
