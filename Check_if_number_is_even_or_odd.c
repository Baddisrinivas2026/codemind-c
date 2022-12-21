
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(1<=N<=10000)
    {
        if(N%2==0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
    }
}
