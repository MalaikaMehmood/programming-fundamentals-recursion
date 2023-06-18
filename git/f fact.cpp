#include<stdio.h>
int swap(int num1,int num2);
int main()
{
	int m,b;
	printf("enter a number\n");
	scanf("%d%d",&m,&b);
	swap(m,b);
}
int swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("the value is %d\n%d",a,b);
}
