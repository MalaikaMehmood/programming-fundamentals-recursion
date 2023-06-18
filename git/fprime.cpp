#include<stdio.h>
int prime(int nu)
{
	int divisor=0,count=2;
printf("enter a number\n");
scanf("%d",&nu);
if(nu%count==0)
{
	divisor++;
		if(divisor==0)
		{
			printf("prime");
	}
else
printf("composite");
}
return nu;
}
int main()
{
	int n1;
	prime(n1);
}
