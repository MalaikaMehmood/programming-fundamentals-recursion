#include<stdio.h>
#include<math.h>
int square(int f);
int main()
{
	int num;
	printf("hello enter numnber plz\n");
	scanf("%d",&num);
	square(num); 
}
int square(int f )
{
int h=sqrt(f);
printf("the square root is %d",h);
return h;
}

