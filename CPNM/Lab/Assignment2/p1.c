#include<stdio.h>

int amicable(int a,int b)
{
	int i,sum1=0,sum2=0;
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0)
			sum1+=i;		
	}
	if(sum1!=b)
		return 0;
	for(i=1;i<=b/2;i++)
	{
		if(b%i==0)
			sum2+=i;		
	}
	if(sum2!=a)
		return 0;
	else
		return 1;

}
int main()
{
	int x,y;
	printf("enter the two number:");
	scanf("%d %d",&x,&y);
	if(amicable(x,y)==1)
		printf("These are amicable number:");
	else
		printf("These are not amicable number:");
}
