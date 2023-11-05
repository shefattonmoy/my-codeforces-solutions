#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=10)
        {
            int x;
            x=a[i];
            printf("A[%d] = %d\n",i,x);
        }
    }

    return 0;
}

