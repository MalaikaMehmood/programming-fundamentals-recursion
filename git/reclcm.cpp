#include<stdio.h>
int lcm(int i,int j);
int main()
{
	int a ,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	printf("%d and
	%d lcm is%d",a,b,lcm(a,b));
	return 0;
}
int lcm(int i,int j)
{
	static int cm=1;
	if((cm%i==0)&&(cm%j==0))
	{
		return cm;
	}
	else
	cm++;
	lcm(i,j);
	return cm;
}
