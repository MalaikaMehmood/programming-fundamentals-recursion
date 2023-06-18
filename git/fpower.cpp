#include<stdio.h>
int  power(int m,int b);
int main()
{
	int num1,num2;
	printf("enter a number\n");
	scanf("%d%d",&num1,&num2);
      power(num1,num2);
}
int power(int m,int b)
{
int pow=1;
while(m>0)
{
	pow*=b;
	m--;
}
printf("the power is %d",pow);
return pow;
}

