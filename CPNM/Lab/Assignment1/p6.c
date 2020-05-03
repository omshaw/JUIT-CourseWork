#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5][5];
	int i,j,k;
	
	printf("Enter the Marks in Five Subjects For Five Students:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum,max=0;
	for(i=0;i<5;i++)
	{	sum=0;
		for(j=0;j<5;j++)
		{
			sum+=a[i][j];
		}
		if(i+1 == 1)
			printf("Total Marks of %dst Student in Five Subjects:%d\n",i+1,sum);
		else if(i+1 == 2)
			printf("Total Marks of %dnd Student in Five Subjects:%d\n",i+1,sum);
		else if(i+1 == 3)
			printf("Total Marks of %drd Student in Five Subjects:%d\n",i+1,sum);
		else
			printf("Total Marks of %dth Student in Five Subjects:%d\n",i+1,sum);
		if(sum>max)
		{	max=sum;
			k=i+1;		
		}		
	}
	printf("Highest Total Marks :%d \nObtained by student:%d\n",max,k); 
	return 0;
}
