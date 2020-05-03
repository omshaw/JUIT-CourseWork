#include<stdio.h>

int main()
{
	int i,j;
	int n;
	scanf("%d",&n);	
	int b=2*n-1,l=n-1,t=b-2,s=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<b;j++)
		{
			if(i+j>=n-1&&i+j<=l)
			{
				printf("+ ");		
			}
			else
				printf("  ");
		}	
		l+=2;
		printf("\n\n");
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<b;j++)
		{
			if(i+j>=s&&i+j<=t)
			{
				printf("+ ");			
			}
			else 
				printf("  ");
		}	
		s+=2;
		printf("\n\n");
	}
	return 0;
}
