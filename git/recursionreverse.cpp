#include<stdio.h>
int sum=0,rev;
int showrev(int num)
{
	if(num){
		rev=num%10;
		sum=sum*10+rev;
		showrev(num/10);
		return sum;
		return sum;
	}
}
int main()
{
	int i,reversenum;
	printf("enter a num");
	scanf("%d",&i);
	reversenum=showrev(i);
	printf("the reverse of enter num is %d",reversenum);
	return 0;
}
