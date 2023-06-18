#include<stdio.h>
int fabnacci(int x)
{
	if(0==x||1==x)
	{
		return x;
	}
	return fabnacci(x-1)+fabnacci(x-2);
	printf("%d",x);
}
int main()
{
	int v;
	printf("enter a number");
	scanf("%d",&v);
	printf("%d",fabnacci(v));
}
