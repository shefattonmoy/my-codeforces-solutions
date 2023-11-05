#include<stdio.h>
long long int factorial(long long int n)
{
    if(n==0)
    {
        return 1;
    }
    long long int answer = factorial(n-1);
    return answer * n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int answer = factorial(n);
    printf("%lld",answer);
    return 0;
}

