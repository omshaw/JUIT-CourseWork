#include<stdio.h>
#include<math.h>

int arm(int x)
{
        int sum=0;
        int n;
	int a=x;	
        while(a>=1)
        {
                n=a%10;
                sum+=(n*n*n);
                a/=10;
        }
        if(x==sum)
                return 1;
        else 
                return 0;
}
int main()
{
        int i;
        for(i=2;i<=500;i++)
        {
         	if(arm(i)==1)
               printf("%d ",i);
        }
        return 0; 
}





