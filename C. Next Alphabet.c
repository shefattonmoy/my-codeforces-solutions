#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='y'|| ch>='A' && ch<='Y')
    {
        int result=ch+1;
        printf("%c\n",result);
    }
    else
    {
        int result=ch-25;
        printf("%c\n",result);
    }
    return 0;
}

