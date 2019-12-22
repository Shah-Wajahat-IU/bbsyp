#include<stdio.h>
main()
{
	//Q6) Take an input from user and check if it is divisible by 2 or not?
	int value,rem;
	printf("Enter Any Number: ");
	scanf("%d",&value);
	rem=value%2;
	if(rem==0)
	{
		printf("%d the given number is divisible by 2",value);
	}
	else
	{
			printf("%d the given number is not divisible by 2",value);
	}
	
}
