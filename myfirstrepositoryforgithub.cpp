#include <stdio.h>

int main()
{
	printf("this is a program that will calculate the total area of a rectangle\n\n\n");
	
	int side1;
	int side2;
	int rectangletotalarea;
	printf("input a number for one of the side of the rectagle: ");
	scanf(" %d", &side1);
	printf("input one more number for the other side of the rectangle: ");
	scanf(" %d", &side2);
	rectangletotalarea = side1 *side2;
	printf("so the total area of the rectangle is %d\n\n\n", rectangletotalarea);
	return 0;
}