#include<stdio.h>
int sum()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=x+y;
    return sum;
}
int main()
{
    int result = sum();
    printf("%d\n",result);
    return 0;
}

