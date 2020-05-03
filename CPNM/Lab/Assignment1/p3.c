#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("1\n");
	}
	int b=(n/2+1);
	for(i=1;i<=b;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(i==j)
				printf("+ ");
			else
				printf("  ");
		}
		printf("\n");
	}
	for(i=1;i<=b-1;i++)
	{
		for(j=1;j<=b;j++)			
		{
			if(i+j==b)
				printf("+ ");
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}


	
	


