#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int convert_deci(char *s,int b)
{
	
	int q=1,d=0;
	int l=strlen(s);
	int i;
	for(i=l-1;i>=0;i--)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			d+=(s[i]-48)*q;
		}
		else if(s[i]>='A'&&s[i]<='F')
		{
			d+=(s[i]-55)*q;
		}
		q=q*b;	
		
	}
	return d;
}
long int convert_decitobin(int n)
{
	int a,r=1;
	long int b=0;
	while(n!=0)
	{
		a=n%2;
		b+=a*r;
		n/=2;
		r=r*10;
	}
	return b;	
}
long int convert_decitoocta(int n)
{
	int a,r=1;
	long int o=0;
	while(n!=0)
	{
		a=n%8;
		o+=a*r;
		n/=8;
		r=r*10;
	}
	return o;	
}
char *convert_decitohexa(int n)
{
	char *s=(char*)malloc(100*sizeof(char));
	int i=0;
	int a;
	while(n!=0)
	{
		a=n%16;
		if(a<10)
			s[i]=a+48;
		else if(a>=10)
			s[i]=a+55;
		i++;
		n/=16;
	}
	int l=strlen(s);
	char temp;
	int j,k;
	for(j=l-1,k=0;k<l/2;k++,j--)
	{
		temp=s[k];
		s[k]=s[j];
		s[j]=temp;	
	
	}
	return s;
}
int main()
{	int b,l,d;	
	int t;
	long int x;
	char *s=(char*)malloc(10*sizeof(char));
	char *n=(char*)malloc(10*sizeof(char));
	printf("************************MENU***************************\n");
	printf("Press 1 to convert decimal to binary\n");
	printf("Press 2 to convert decimal to octa\n");
	printf("Press 3 to convert decimal to hexa\n");
	printf("Press 4 to convert binary to decimal\n");
	printf("Press 5 to convert binary to octa\n");
	printf("Press 6 to convert binary to hexa\n");
	printf("Press 7 to convert octa to decimal\n");
	printf("Press 8 to convert octa to binary\n");
	printf("Press 9 to convert octa to hexa\n");
	printf("Press 10 to convert hexa to decimal\n");
	printf("Press 11 to convert hexa to binary\n");
	printf("Press 12 to convert hexa to octa\n");
	printf("*******************************************************\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1:		printf("input a decimal number:");
				scanf("%d",&d);
				x=convert_decitobin(d);
				printf("Binary number is:%ld\n",x);
				break;
		case 2:		printf("input a decimal number:");
				scanf("%d",&d);
				x=convert_decitoocta(d);
				printf("Octa number is:%ld\n",x);
				break;
		case 3:		printf("input a decimal number:");
				scanf("%d",&d);
				s=convert_decitohexa(d);
				printf("Hexa number is:");
				printf("%s\n",s);;
				break;
		case 4:		printf("input a binary number:");
				scanf("%s",s);				
				t=2;
				l=convert_deci(s,t);
				printf("Decimal number is:%d\n",l);
				break;
		case 5:		printf("input a binary number:");
				scanf("%s",s);				
				t=2;
				l=convert_deci(s,t);
				x=convert_decitoocta(l);
				printf("Octa number is:%ld\n",x);
				break;
		case 6:		printf("input a binary number:");
				scanf("%s",s);					
				t=2;
				l=convert_deci(s,t);
				n=convert_decitohexa(l);
				printf("Hexa number is:");
				printf("%s\n",n);	
				break;
		case 7:		printf("input octa number:");
				scanf("%s",s);	
				t=8;
				l=convert_deci(s,t);
				printf("Decimal number is:%d\n",l);
				break;
		case 8:		printf("input octa number:");
				scanf("%s",s);	
				t=8;
				l=convert_deci(s,t);
				x=convert_decitobin(l);
				printf("Binary number is:%ld\n",x);
				break;
		case 9:		printf("input octa number:");
				scanf("%s",s);	
				t=8;
				l=convert_deci(s,t);
				n=convert_decitohexa(l);
				printf("Hexa number is:");
				printf("%s\n",n);	
				break;
		case 10:	printf("input Hexa number:");
				scanf("%s",s);	
				t=16;
				l=convert_deci(s,t);
				printf("Decimal number is:%d\n",l);
				break;
		case 11:	printf("input hexa number:");
				scanf("%s",s);	
				t=16;
				l=convert_deci(s,t);
				x=convert_decitobin(l);
				printf("Binary number is:%ld\n",x);
				break;
		case 12:	printf("input hexa number:");
				scanf("%s",s);	
				t=16;
				l=convert_deci(s,t);
				x=convert_decitoocta(l);
				printf("Octa number is:%ld\n",x);
				break;
		default:	
				break;
	}
	return 0;
}




		




















		
