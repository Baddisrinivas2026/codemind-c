
#include<stdio.h>
int main()
{
    int n,i,d,m=0;
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        if(d>m)
        {
            m=d;
        }
    }
    printf("%d",m);
}
