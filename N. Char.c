#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>='a'&& X<='z')
    {
        int result = X-32;
        printf("%c",result);
    }
    else
    {
        int result = X+32;
        printf("%c",result);
    }
    return 0;
}

