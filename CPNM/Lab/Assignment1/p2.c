#include<stdio.h>

int sos(int a)
{	int n,sum=0;
	while(a>=1)
	{
		n=a%10;
		sum+=(n*n);
		a/=10;
	}
	return sum;
}
int happy(int a)
{
	int i,b;
	for(i=0;i<100;i++)
	{
		b=sos(a);
		if(b==1)
		{
			break;
		}
		else
		{
			a=b;
		}
	}
	if(b==1)
		return 1;
	else 
		return 0;
}
int main()
{	int i,j=10;
	for(i=1; ;i++)
	{
		if(happy(i)==1&&j>0)
		{
			printf("%d ",i);
			j--;
		}
		if(j<1)
			break;
	
	}
	return 0;
}	

		
