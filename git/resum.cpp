#include<stdio.h>
int add(int famyh)
{
	if(famyh==1)
		return 1;
	 return (famyh+add(famyh-1));
	 printf("%d",famyh);
}
int main()
{
	int meh;
	printf("enter the num\n");
	scanf("%d",&meh);
	printf("%d",add(meh));
}
