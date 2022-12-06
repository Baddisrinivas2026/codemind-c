#include<stdio.h>
int main()
{
    int a,b,max,lcm;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    while(max>0)
    {
        if(max%a==0&&max%b==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    printf("%d",lcm);
}