#include<stdio.h>
#include<math.h>
main()
{
	/*Q4)Take a value of an angle in degree measure from user 
	 and convert it into radian measure.
	 calculate the slope of that angle in radian measure.

	Hint: 1 rad = deg * pi / 180 m = tan(angle) // m is the slope*/
	float deg,rad,m;
	printf("Enter angle in Degree: ");
	scanf("%f",&deg);
	rad=deg*(3.142/180.0);
	m=tan(deg);
	printf("The Slope of angle: %f rad",m);
	printf("\nThe Slope of angle: %e rad",m);
}

