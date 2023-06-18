#include<stdio.h>
int hailstonese(int num);
int main()
{
	int a;
	printf("enter a num");
	scanf("%d",&a);
	hailstonese(a);
}
int hailstonese(int num)
{
if(num>1)
{
if(num%2==0)
{
num=num/2;
printf("%d",num);
}
else
if(num%2!=0)
{

num=3*num+1;
printf("%d",num);
}
}
return num;
}

