#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);	
	int i,j,k;
	for(i=1;i<=n;i++)
	{	k=n;
		for(j=1;j<=n;j++)
		{
			if(i+j>=n+1)
				printf("%d ",k);
			else
				printf("  ");
			k--;
		}
		printf("\n");
	}
	int b=n/2+1,t=b+3,l=3;	
	for(i=1;i<=b;i++)
	{	
		for(j=1;j<=n;j++)
		{
			if(i+j==b+1||(i+j==t&&i>=2))
				printf("+ ");
			else
				printf("  ");
			
		}
		if(i>=2)			
			t+=2;
		printf("\n");
	}
	for(i=1;i<=b-1;i++)
	{	
		for(j=1;j<=n;j++)
		{
			if(i+j==n||i+j==l)
				printf("+ ");
			else
				printf("  ");
			
		}
		l+=2;
		printf("\n");
	}


	return 0;
}
