#include<stdio.h>
int power(int i,int j);
int main()
{
	int base,m,res;
	printf("enter the base and num");
	scanf("%d%d",&base,&m);
	res=power(base,m);
	printf("%d^%d=%d",base,m,res);
	return 0;
}
int power(int i,int j)
{
	if(j!=0)
return i*power(i,j-1);
else
return 1;
}
