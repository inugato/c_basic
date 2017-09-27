#include "curses.h"
#include "stdio.h"

int main()
{
	int n;float i=1;
	float sum=0;
	printf("Enter Value : ");
	scanf("%d",&n);
	while( i<= n )
	{
		sum = sum + 1/(2*i);
		i++;
	}
	printf("Sum : %f ",sum);
	printf("\n");
}
