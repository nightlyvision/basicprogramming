#include <stdio.h>
int main()
{
	int radius;
	printf("Please enter the radius of the circle: ");
	scanf("%i" ,&radius);
	double area = 3.14159 * (radius * radius);
	printf("The area of a circle with %i radius is %f\n",radius,area);
	return 0;
}

