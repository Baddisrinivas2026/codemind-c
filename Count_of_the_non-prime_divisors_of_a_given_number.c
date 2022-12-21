
#include<stdio.h>
int main()
{
    int n,i,m,j,c,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=i;
        if(n%i==0)
        {
             c=0;
            for(j=1;j<=m;j++)
            {
                if(m%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                k++;
            }
        }
    }
    printf("%d",k);
}
