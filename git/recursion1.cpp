#include<stdio.h>
int show(int fam)
{
if(fam==0)
{
	return 1;
}
show  (fam-1);
printf("%d\n",fam);
}
int main()
{
int mak;
printf("enter the number\n");
scanf("%d",&mak);
show(mak);
}
