#include<stdio.h>
int even(int num);
int main()
{
	int m;
	printf("enter a number\n");
	scanf("%d",&m);
	even(m);
}
int even(int num)
{
	if(num%2==0)
	{
		printf("even");
	}
else
{
printf("odd");
}
return num;
}


