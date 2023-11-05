#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    int digit=n%10;
    int digit_01=n/10;
    if(digit%digit_01==0 || digit_01%digit==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

