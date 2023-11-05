#include<stdio.h>
int main()
{
    int n,k,a[100],sum=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
            sum++;
    }
    printf("%d\n",sum);

    return 0;
}
