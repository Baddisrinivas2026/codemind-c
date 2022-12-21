
#include<stdio.h>
int main()
{
    int n,i,sum=0,p=1,d[100];
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        d[i]=n%10;
        n=n/10;
        sum=d[i]+sum;
        p=p*d[i];
    }
    printf("%d",p-sum);
}
