#include<stdio.h>

void sort(int arr[5])
{
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}	
	}

}
int main()
{
	int i, ar[5];
	printf("Input the elements of the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&ar[i]);	
	}
	sort(ar);
	printf("The sorted array is:");
	for(i=0;i<5;i++)
	{
		printf("%d ",ar[i]);	
	}
	printf("\n");
	return 0;
}
