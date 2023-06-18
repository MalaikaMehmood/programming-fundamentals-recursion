#include<stdio.h>
int even(int num);
int main()
{
	int m;
	printf("enter a number\n");
	scanf("%d",&m);
	even(m);
}
int fact(int num)
{
int r=num%2;
if(r==0)
{
	printf("even");
}
else
printf("odd");
return r;
printf("the factorial od %d is %d",num,r);
}

