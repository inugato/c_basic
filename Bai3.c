#include "curses.h"
#include "stdio.h"

int main()
{
	float i=1;
	int n;
	float Sum = 0;
	printf("Enter Value: ");
	scanf("%d",&n);
	while ( i <= n )
	{
		Sum = Sum + 1/(i);
		i++;
	}
	printf("Sum %f:",Sum);
}
