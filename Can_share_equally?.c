
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==0 && y%2)
    {
        printf("NO");
    }
    else if(x%2==0 && y%2)
    {
        printf("YES");
    }
    else if(x%2)
    {
        printf("NO");
    }
    else if(x%2==0 && y%2==0)
    {
        printf("YES");
    }
}
