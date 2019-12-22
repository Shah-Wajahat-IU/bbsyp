#include<stdio.h>
#include<math.h>
main()
{
	/*Q2) Take radius as an input from user in centimeter 
	and calculate the volume of sphere in centimeter-cube (cm^3) and 
	also in meter-cube (m^3).Hint: V = (4/3) * pi * r^3 
	1cm = 0.01m*/
	float radius,volume,volume_in_m;
	printf("Please Enter the Value of Radius: ");
	scanf("%f",&radius);
	volume=((4.0/3.0)*3.14)*pow(radius,3);
	printf("Volume of Sphere in Centimeter-cube is: %f cm^3",volume);
	volume_in_m=volume*0.0001;
	printf("\nVolume of Sphere in Centimeter-cube is: %f m^3",volume_in_m);
	printf("\nVolume of Sphere in Centimeter-cube is: %e m^3",volume_in_m);
	
}
