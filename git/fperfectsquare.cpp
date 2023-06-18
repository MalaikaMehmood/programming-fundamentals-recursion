#include<stdio.h>
int perfect(int num );
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	perfect(n);
}
int perfect(int num )
{
	int sq=0,sum=0;
	for(int i=1;i<=1000;i++)
	{
		for(int j=1;j*j<=i;j++)
		{
			if(j*j==i)
			{
				sum+=i;
				sq++;
			}
		}
	}
	printf("the perfect square is %d",sq);
	 return sq; 
}
