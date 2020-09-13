#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z;
	printf("enter fist number ");
	scanf("%d", &x);
	printf("enter second number");
	scanf("%d", &y);
	
	z = x + y;
	if (z == 0)
	{
		printf("zero");
		
	}
	else if (z > 0)
	{
		if (z % 2 == 0)
		{
			printf("positive even");
		}
		else
		{
			printf("positive odd");
		}
	}
	else
	{
		if (z % 2 == 0)
		{
			printf("negative even");
		}
		else
		{
			printf("negative odd");
		}
	}
	return 0;
}