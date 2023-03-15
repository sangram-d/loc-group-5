//write a c programe to enter the radius of a circle and find its diameter circumference and area


#include<stdio.h>
#include<math.h>
int main()
{
	float radius;
	printf("Enter the value of radius : ");
	scanf("%f",&radius);
	float diameter;
	diameter=2*radius;
	printf("Diameter is %f.\n",diameter);
	float circumference;
	circumference=2*3.14*radius;
	printf("Circumference is %f.\n",circumference);
	float area;
	area=3.14*radius*radius;
	printf("Area is %f.\n",area);
	
}
