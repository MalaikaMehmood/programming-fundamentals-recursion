#include<stdio.h>
int sumdigit(int m);
int main()
{
	int num,d;
	printf("enter a num");
	scanf("%d",&num);
	d=sumdigit(num);
	printf("%d is sum of digit",d);
}
	int sumdigit(int m)
{
	if(m==0)
		return 0;
	return (m%10)+sumdigit(m/10);
	
}

