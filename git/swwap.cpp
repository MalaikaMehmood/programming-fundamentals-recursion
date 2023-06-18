#include<stdio.h>
#include<conio.h>
int swap(int num1,int num2);
int main()
{
	int num1,num2;
	printf("plz enter two numbers");
	scanf("%d%d",&num1,&num2);
	swap(num1,num2);
}
int swap(int num1,int num2)
{
	int result;
	result=num1;
	num1=num2;
	num2=result;
	printf("the value before swap is %d\t%d",num1,num2);	
}
