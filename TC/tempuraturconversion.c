#include<stdio.h>
int main()
{
	float F,C;
	printf("Enter tempurature in Fahrenheit:");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("Tempurature in celcius=%.2f",C);
	return 0;
}
