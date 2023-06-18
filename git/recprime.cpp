#include<stdio.h>
int prime(int i,int j);
int main()
{
	int a,b;
	printf("enter a num");
	scanf("%d",&a);
	b=prime(a,a/2);
	if(b==1)
	{
		printf("%d is prime",a);
	}
	else
	{
	printf("not a  prime");
	}
}

	int prime(int i,int j)
	{
		if(j==1)
		return 1;
		if(i%j==0)
		return 0;
		return prime(i,j-1);
	}
	
