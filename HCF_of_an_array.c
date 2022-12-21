
#include<stdio.h>
int main()
{
	int arr[100],n,i,j,hcf,co,min,k,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
		min=arr[0];
		for(i=0;i<n;i++)
		{
			if(arr[i]<min)
			{
			min=arr[i];
			}
		}
for(k=min;k>=1;k--)
{
	co=0;
	for(j=0;j<n;j++)
	{
		if(arr[j]%k==0)
	    co++;      
	}
		if(co==n)                                
		{
			hcf=k;
			break;	                               
		}	    
}	
printf("%d",hcf);
}
