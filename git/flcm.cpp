#include<stdio.h>
int lcm(int d,int g);
int main()
{
	int n1,n2;
	printf("enter two number\n");
	scanf("%d%d",&n1,&n2);
	lcm(n1,n2);
}
int lcm(int d,int g)
{
		int lcm=1;
	while(d>1||g>1)
	{
		int l=d>g?d:g;
		int m=1;
		for(int i=2;i<=l;i++)
		{
			if(d%i==0||g%i==0)
			{
				m=i;
				if(d%i==0)
			d=d/i;
		if(g%i==0)
		g=g/i;
		lcm=lcm*m;
	break;
			}
			printf("\n");
		}
	}
	printf("the lcm of  %d",lcm);
	return lcm;
}

