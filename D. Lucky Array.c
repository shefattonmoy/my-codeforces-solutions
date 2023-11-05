#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int minElement=a[0];
    int minCount=1;
    for(int i=1; i<n; i++)
    {
        if(a[i]<minElement)
        {
            minElement=a[i];
            minCount=1;
        }
        else if(a[i]==minElement)
        {
            minCount++;
        }

    }
    if(minCount%2==1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
    return 0;
}
