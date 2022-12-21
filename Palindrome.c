
#include<stdio.h>
int main()
{
    int n,d,a=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        a=a*10+d;
    }
    if(a==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
