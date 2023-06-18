#include<stdio.h>
#include<math.h>
unsigned int gcd(unsigned i,unsigned j);
int main()
{
	int a,b;
	printf("enter two num/n");
	scanf("%d%d",&a,&b);
	printf("gcd %d and %d is %d",a,b,gcd(a,b));
	return 0;
}
unsigned int gcd(unsigned i,unsigned j)
{
	if(j>i)
	return gcd(j,i);
	if(j==0)
	return i;
	else
	return gcd (j,i%j);

}

