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
    int x;
    scanf("%d",&x);
    int flag=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=i;
            break;
        }
    }
    printf("%d\n",flag);
    return 0;
}

