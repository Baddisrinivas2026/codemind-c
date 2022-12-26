#include<stdio.h>
int main()
{
    int n,i,sq,sum=0,sums=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        sum=sum+sq;
    }
    for(i=1;i<=n;i++)
    {
        sums=sums+i;
    }
    int a=(sums*sums)-sum;
    printf("%d",a);
}