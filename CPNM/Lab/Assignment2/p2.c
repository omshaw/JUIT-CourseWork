#include<stdio.h>

long long int bin_eq(int n)
{
	if(n==0)
		return 0;
	else
		return (n%2+10*bin_eq(n/2));
}

int main()
{
	int n;
	printf("input a decimal number:");
	scanf("%d",&n);
	long long int b=bin_eq(n);
	printf("Equivalent binary number is:%lld\n",b);
	return 0; 
}
