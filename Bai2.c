#include "curses.h"
#include "stdio.h"
#include "math.h"

int main()
{
	int n;double i;
	int Sum;
	double power;
	{
		printf("Enter Value: ");
		scanf("%d",&n);
		while(i <= n)
		{
			power =  pow(i,2);
			i++;
			Sum = Sum + power;
		}
		printf("Sum %d:",Sum);
	}
	return 0;
}
