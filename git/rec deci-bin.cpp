#include<stdio.h>
int decimaltobinary(int num);
int main()
{
	int i;
	printf("enter a number/n");
	scanf("%d",&i);
	printf("binary number");
	decimaltobinary(i);
}
int decimaltobinary(int num)
{
	if(num==0||num==1)
	{
	printf("%d",num);
	return 1;
}
decimaltobinary(num/2);
decimaltobinary(num%2);
}
