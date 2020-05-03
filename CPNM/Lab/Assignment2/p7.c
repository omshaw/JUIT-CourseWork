#include<stdio.h>
#include<stdlib.h>

int * reverse(int a[],int n)
{
	int *b=(int *)malloc(sizeof(int)*5);
	int i,j=n-1;
	for(i=0;i<n;i++)
	{
		*(b+j)=*(a+i);
		j--;		
	}
	return b;
}

int main()
{
	int x;
	printf("enter the sizeof the array");
	scanf("%d",&x);
	int i;
	int a[x];
	for(i=0;i<x;i++)
	{
		scanf("%d",(a+i));	
	}
	int *y=reverse(a,x);
	printf("Reverse elements are:");
	for(i=0;i<x;i++)
	{
		printf("%d ",*(y+i));
	}
	printf("\n");
	return 0;
}
