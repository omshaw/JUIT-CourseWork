#include<stdio.h>

int main()
{
	int n;
	printf("input the size of array");
	scanf("%d",&n);
	int a[n];
	int i,j,temp;
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<n;i++)
	{	
		printf("%d ",a[i]);
	}
	return 0;
}
