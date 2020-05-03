#include<stdio.h>

int main()
{
	int a[100],b[100];
	int n,i,j;
	printf("input the value of n(max 100):");
	scanf("%d",&n);
	printf("input the elements of array(except 0):");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&a[i]!=0)
			{	count++;
				a[j]=0;			
			}		
		}
	}
	printf("Total duplicate element:%d\n",count);
	int k=n-count-1;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{	
			b[k]=a[i];
			k--;
		}
	}
	for(i=0;i<(n-count);i++)
	{
		printf("%d ",b[i]);
	}
	return 0;	
}
	
