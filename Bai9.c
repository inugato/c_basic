#include "curses.h"
#include "stdio.h"

int main()
{
	int Multiple = 1;
	int i = 1; int n;
	printf("Enter Value: ");
	scanf("%d",&n);
	while( i <= n )
	{
		Multiple = Multiple * i;
		i++;
	}
	printf("Multiple: %d ",Multiple);
	printf("\n");
}
