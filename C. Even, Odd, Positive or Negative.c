#include<stdio.h>
int main()
{
    int X,a,evenCount=0,oddCount=0, negativeCount=0, positiveCount=0;
    scanf("%d",&X);
    for(int i=1; i<=X; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
        if(a>0)
        {
            positiveCount++;
        }
        else if(a<0)
        {
            negativeCount++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",evenCount, oddCount, positiveCount, negativeCount);
    return 0;
}

