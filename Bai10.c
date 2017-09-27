#include "curses.h"
#include "stdio.h"
#include "math.h"
int main()
{
	int x;int y;
	double factorial = 0;
	printf("Enter Value: ");
	scanf("%d",&x);
	printf("Enter Value: ");
	scanf("%d",&y);
	factorial = pow(x,y);	
	printf("n!: %f",factorial);
	printf("\n");
}
