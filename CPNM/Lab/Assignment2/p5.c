#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum=0;
	printf("input the size of array:");
	scanf("%d",&n);	
	int *a=(int *)malloc(n*sizeof(int));
	int i;
	printf("Input The elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",& *(a+i));
		
	}
	printf("Elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
		
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		
		sum+=*(a+i);
	}
	printf("The sum of elements are:%d\n",sum);
	return 0;

}
