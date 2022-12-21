
#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("not a prime");
    }
    if(n==2)
    {
       printf("prime");  
    }
    
    for(i=2;i<n;i++)
    {
       if(n%i==0)
       {
           c++;
       }
           
    }
    if(c>0)
    {
        printf("not a prime");
    }
    else
{
    printf("prime");
}
}
