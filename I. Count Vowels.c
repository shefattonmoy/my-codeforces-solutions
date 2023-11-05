#include<stdio.h>
int countVowels(char ch[],int i)
{
    if(ch[i]=='\0')
    {
        return 0;
    }
    int answer = countVowels(ch,i+1);
    if(ch[i]>='A' && ch[i]<='Z')
    {
        ch[i] = ch[i] + 32;
    }
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
    {
        return answer + 1;
    }
    else
    {
        return answer;
    }
}
int main()
{
    char ch[205];
    fgets(ch,205,stdin);
    int count = countVowels(ch,0);
    printf("%d\n",count);
    return 0;
}

