#include<stdio.h>
int fact(int hf)
{
	if(hf<=0)
	{
		return 1;
	}
	return fact(hf-1)*hf;
	printf("%d",hf);
}
int main()
{
	int mb;
	printf("enter a number\n");
	scanf("%d",&mb);
		printf("%d\n",fact(mb));
}
	
