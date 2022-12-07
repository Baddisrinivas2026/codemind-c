#include<stdio.h>
int main()
{
    int n,r,i,p;
    scanf("%d%d",&r,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            p=r*i;
            printf("%d x %d = %d
",r,i,p);
        }
    }
}