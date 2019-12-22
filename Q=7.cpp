#include<stdio.h>
main()
{
	//Take an input from user and check if it is negative or positive?
	int value;
	printf("Enter a value: ");
	scanf("%d",&value);
	if(value<=0)
	{
		printf("%d given number is Negative",value);
	}
	else
	{
		printf("%d given number is Positive",value);
	}
}
