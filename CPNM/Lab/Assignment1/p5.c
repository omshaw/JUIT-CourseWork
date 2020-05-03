#include<stdio.h>
#include<stdlib.h>

int **sum(int a[3][3],int b[3][3])
{
	int **c = (int **)malloc(3 * sizeof(int *));
	int i,j;
	int row;
    	for (row = 0; row < 3; row++) {
        	c[row] = (int *)malloc(3 * sizeof(int));
    	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	return c;
}
int **dif(int a[3][3],int b[3][3])
{
	int **d = (int **)malloc(3 * sizeof(int *));
	int i,j;
	int row;
    	for (row = 0; row < 3; row++) {
        	d[row] = (int *)malloc(3 * sizeof(int));
    	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
		}
	}
	return d;
}
int **prod(int a[3][3],int b[3][3])
{ 
	int **e = (int **)malloc(3 * sizeof(int *));
	int i,j,k,sum;
	int row;
    	for (row = 0; row < 3; row++) {
        	e[row] = (int *)malloc(3 * sizeof(int));
    	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;			
			for(k=0;k<3;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			e[i][j]=sum;		
		}
	}
	return e;
}
void output(int **t)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",t[i][j]);
		}
		printf("\n");
	}

}
int main()
{
	int a[3][3],b[3][3];
	int i,j;
	int **arr = (int **)malloc(3 * sizeof(int *));
	int row;
    	for (row = 0; row < 3; row++) {
        	arr[row] = (int *)malloc(3 * sizeof(int));
    	}
	printf("Input First 2D Array:\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Input Second 2d Array:\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int ch;
	printf("------------Menu---------------------\n");
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for Substraction \n");
	printf("Enter 3 for Multiplication \n");
	printf("-------------------------------------\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 :
			arr=sum(a,b);
			output(arr);
			break;
		case 2 : 	
			arr=dif(a,b);
			output(arr);
			break;
		case 3 :
			arr=dif(a,b);
			output(arr);
			break;
		
		default:
		 	printf("wrong input:");
			break;
	}	
	return 0;
}
