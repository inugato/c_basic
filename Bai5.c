#include "curses.h"
#include "stdio.h"

int main()
{
	float i= 0;int n;
	float Sum = 0;
	printf("Enter Value: ");
	scanf("%d",&n);
	while ( i < n )
	{
		Sum = Sum + 1/(2*i+1);
		i++;
	}
	printf("Sum : %f",Sum);
	printf("\n");
}


