#include<stdio.h>
#include<stdlib.h>
int * merge_sort(int a[],int m,int b[],int n)
{
	int * t=(int *)malloc(sizeof(int)*(m+n));	
	int i=0,j=0,k;
	for(k=0;k<(m+n);k++)
	{
		if(i<m&&j<n)
		{	if(a[i]>b[j])
				t[k]=b[j++];
			else
				t[k]=a[i++];

		}
		else if(i<m)
			t[k]=a[i++];
		else if(j<n)
			t[k]=b[j++];
			
	}	
	return t;
}
int main()
{	int l,o;
	printf("Enter the size of the first array:");
	scanf("%d",&l);
	printf("Enter the size of the second array:");
	scanf("%d",&o);
	int x[l],y[o];
	printf("enter the elements of first sorted array:");
	for(int i=0;i<l;i++)
	{
		scanf("%d",&x[i]);		
	
	}
	printf("enter the elements of second sorted array:");
	for(int i=0;i<o;i++)
	{
		scanf("%d",&y[i]);		
	
	}
	int *s=merge_sort(x,l,y,o);
	printf("Array after merge Sort is:");
	for(int i=0;i<(l+o);i++)
	{
		printf("%d ",s[i]);		
	
	}
	printf("\n");
	return 0;
}
