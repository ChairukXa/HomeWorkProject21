#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Positive_or_Negative(int x);
int main()
{
	int a, b, Sum;
	printf("Enter First Number :");
	scanf("%d", &a);
	printf("Enter Second Number :");
	scanf("%d", &b);
	Sum = a + b;
	Positive_or_Negative(Sum);
	return 0;
}
int Positive_or_Negative(int x)
{
	if (x > 0)
	{
		if (x % 2 == 0)
		{
			printf("Positve Even");
		}
		else
		{
			printf("Positve odd");
		}
	}
	else if (x < 0)
	{
		if (x % 2 == 0)
		{
			printf("Negative Even");
		}
		else
		{
			printf("Negative odd");
		}
	}
	else if (x == 0)
	{
		printf("Zero");
	}
	return x;
}