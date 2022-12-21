
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(-1000<=N<=1000)
    {
        if(N>=0)
        {
            printf("Positive Number");
        }
        else
        {
            printf("Negative Number");
        }
    }
}
