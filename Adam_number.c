
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a,b,c,t,s=0,d,k=0;
    scanf("%d",&n);
    t=n;
    a=pow(n,2);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s*10+d;
        //printf("%d",s);
    }
    //printf("%d",s);
    b=pow(s,2);
    m=b;
    while(b)
    {
        c=b%10;
        b=b/10;
        k=k*10+c;
    }
    if(k==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
