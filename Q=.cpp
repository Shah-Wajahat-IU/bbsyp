#include<stdio.h>
#include<math.h>
main()
{
	/*Q3)Take diameter as an input from user in centimeter and 
	write a program to calculate the area of a circle in meter-square(m^2).
	hint : r = d/2 A = pi * r^2*/
	float dia,area,rad,area_in_m;
	printf("Enter The Value of Diameter: ");
	scanf("%f",&dia);
	rad=dia/2.0;
	area=3.142*pow(rad,2);
	printf("The Area Of a Circle in cm^2 is: %f cm^2\n",area);
	area_in_m=area*0.0001;
	printf("The Area Of a Circle in m^2 is: %f m^2\n",area_in_m);
	printf("The Area Of a Circle in m^2 is: %e m^2\n",area_in_m);
	
	
}
