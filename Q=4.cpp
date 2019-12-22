#include<stdio.h>
#include<math.h>
main()
{
	/*Q5) Take two coordinates from user and print the values in such format
	“1st coordinate = (x1, y1)
	2nd coordinate = (x2,y2)”
	Also find the distance between two coordinates.*/
	
	int a1,a2,b1,b2,a,b;
	float distance=0.0;
	printf("Enter The value of 1st coordinate of a1: ");
	scanf("%d",&a1);
	printf("Enter The value of 1st coordinate of a2: ");
	scanf("%d",&a2);
	printf("Enter The value of 1st coordinate of b1: ");
	scanf("%d",&b1);
	printf("Enter The value of 1st coordinate of b2: ");
	scanf("%d",&b2);
	printf("1st coordinate=(%d,%d)",a1,a2);
	printf("\n2nd coordinate=(%d,%d)",b1,b2);
	a=pow((a2-a1),2);
	b=pow((b2-b1),2);
	
	distance=sqrt((float)a-b);
	printf("\nThe distance of given two Coordinate is: %f",distance);
	
	
}
