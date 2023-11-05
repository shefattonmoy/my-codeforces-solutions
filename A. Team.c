#include<stdio.h>
int main()
{
    int n,count=0,i,p,v,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&p,&v,&t);
        if(p+v+t>=2)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
