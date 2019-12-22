#include<stdio.h>
main()
{
	int age;
	float maths,physics,urdu,english,islamiat,computer,obtaMarks,per,totalMarks=600.0;
	printf("Enter the age of Student: ");
	scanf("%d",&age);
	printf("Enter the marks of Maths: ");
	scanf("%f",&maths);
	printf("Enter the marks of Physics: ");
	scanf("%f",&physics);
	printf("Enter the marks of Urdu: ");
	scanf("%f",&urdu);
	printf("Enter the marks of English: ");
	scanf("%f",&english);
	printf("Enter the marks of Islamiat: ");
	scanf("%f",&islamiat);
	printf("Enter the marks of Computer: ");
	scanf("%f",&computer);
	obtaMarks=maths+physics+urdu+english+islamiat+computer;
	
	per=(obtaMarks/totalMarks)*100.0;
	if(per>=50)
	{
		printf("--------------------------------------\n");
	printf("Name: Shah Wajahat Ejaz\n");
	printf("Father Name: Shah Ejaz Ul Haque\n");
	printf("Age: %d\n",age);
	printf("Institude: Computer Collegiate\n");
	printf("--------------------------------------\n");
	printf("Maths\t\t\t%f",maths);
	printf("\nPhysics\t\t\t%f",physics);
	printf("\nUrdu\t\t\t%f",urdu);
	printf("\nEnglish\t\t\t%f",english);
	printf("\nIslamiat\t\t%f",islamiat);
	printf("\nComputer\t\t%f",computer);
	printf("\n--------------------------------------\n");
	printf("Obtain\t\t\t%f",obtaMarks);
	printf("\nTotal Marks\t\t%f",totalMarks);
	printf("\nPercentage\t\t%f",per);
	printf("\nRemarks\t\t\tPass");
	}
	else
	{
		printf("--------------------------------------\n");
	printf("Name: Shah Wajahat Ejaz\n");
	printf("Father Name: Shah Ejaz Ul Haque\n");
	printf("Age: %d\n",age);
	printf("Institude: Computer Collegiate\n");
	printf("--------------------------------------\n");
	printf("Maths\t\t\t%f",maths);
	printf("\nPhysics\t\t\t%f",physics);
	printf("\nUrdu\t\t\t%f",urdu);
	printf("\nEnglish\t\t\t%f",english);
	printf("\nIslamiat\t\t%f",islamiat);
	printf("\nComputer\t\t%f",computer);
	printf("\n--------------------------------------\n");
	printf("Obtain\t\t\t%f",obtaMarks);
	printf("\nTotal Marks\t\t%f",totalMarks);
	printf("\nPercentage\t\t%f",per);
	printf("\nRemarks\t\t\tFail");
		
	}
	
	
	
}
