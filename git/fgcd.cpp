#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
	int m,b;
	printf("enter two num\n");
	scanf("%d%d",&m,&b);
	gcd(m,b);
}
int gcd(int num1,int num2)
{
	int lar,small;
	if(num1>num2)
	{
		lar=num1;
		small=num2;
	}
	else
	{
	lar=num2;
	small=num1;
}
while(small>0)
{
	int r=lar%small;
	lar=small;
	small=r;
	}
	printf("the gcd is %d",lar);
	return lar;
}
