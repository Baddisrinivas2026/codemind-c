
#include<stdio.h>
int main()
{
    int n,i,d;
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        printf("%d",d);
    }
    
}
