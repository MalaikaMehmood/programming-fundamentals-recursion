#include<stdio.h>
unsigned long long factorial(int n)
{
	unsigned long long fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
unsigned long long binomialcoefficient(int n,int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}
void printPascalPyramid(int height)
{
	int row=height+1;
	for(int i=0;i<row;i--)
	{
		for(int j=0;j<(row-i-1);j++)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			printf("%6llu",binomialcoefficient(i,j));
		}
		printf("\n\n");
	}
}
int main()
{
	int height;
	printf("enter the height:");
	scanf("%d",&height);
	printf("Pascals Pyramid:\n");
	printPascalPyramid(height);
	return 0;
}
