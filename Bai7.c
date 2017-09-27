#include "curses.h"
#include "stdio.h"

int main()
{
	float i=0;int n;
	float Sum = 0; 
	printf("Enter Value: ");
	scanf("%d",&n);
	while( i<n )
	{
		Sum = Sum + (i+1)/(i+2);
		i++;
	}
	printf("Sum: %f",Sum);
}
